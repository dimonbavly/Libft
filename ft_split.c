#include "libft.h"
#include <stdlib.h>

static size_t ft_countwords(char *str, char c);
static size_t ft_split_handler(char *str, char c, char **dest);

char	**ft_split(char const *s, char c)
{
	
	char *str;
	char **res;

	str = ft_strtrim(s, &c);
	if (!str)
		return (NULL);
	res = malloc(sizeof(*res) * ft_countwords(str, c));
	if (ft_countwords(str,c) != ft_split_handler(str, c, res))
		return (NULL);
	return (res);

}


static size_t ft_countwords(char *str, char c)
{
	size_t cnt;
	size_t occ;

	
	occ = 0;
	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] == c)
			cnt++;
		else if (str[cnt + 1] == c || str[cnt + 1] == '\0')
		{
			cnt++;
			occ++;
		}	
		else 
			cnt++;
	}
	return (occ);
}

static size_t ft_split_handler(char *str, char c, char **dest)
{
	size_t cnt;
	size_t occ;
	size_t start;
	
	occ = 1;
	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] == c)
			cnt++;
		else if (!cnt)
			start = cnt++;
		else if (cnt)
		{
			if (str[cnt - 1] == c)
				start = cnt;
			cnt++;
		}
			else if (str[cnt + 1] == c)
		{
			str[cnt + 1] = '\0';
			dest[occ - 1] = ft_strtrim(str + start, &c);
			if (!dest[occ-1])
				return (occ);
			cnt++;
			occ++;

		}
		else if (str[cnt + 1] == '\0')
		{
			dest[occ - 1] = ft_strtrim(str + start, &c);
			if (!dest[occ-1])
				return (occ);
			cnt++;
			occ++;
		}

		else 
			cnt++;
	}
	return (occ);
}
