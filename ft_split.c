#include "libft.h"
#include <stdlib.h>

static size_t	ft_getstart(char const *s, char c);
static size_t	ft_getend(char const *s, char c, size_t len_s);
static size_t	ft_getamountchars(char const *s, char c, size_t start, size_t end);
static void 	ft_freeall(char **dest, size_t elems);




char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	cntpos;
	size_t	amountchars;
	char	**res;
	size_t holdamount;
	end = ft_getend(s, c , ft_strlen(s));
	start = ft_getstart(s, c);
	amountchars = ft_getamountchars(s, c, start, end);
	holdamount = amountchars;
	res = malloc(sizeof(res) * (amountchars + 1));
	if (!res)
		return (NULL);
	cntpos = start;
	while (cntpos <= end)
	{
		if (s[cntpos] == c)
		{
			*res = ft_substr(s, start, cntpos - start);
			if (!(*res))
			{
				while (*s == c)
					s++;
				ft_freeall(res, ft_getamountchars(s, c, 0, end) - amountchars);
				return (NULL);
			}
			start = cntpos + 1;
			res++;
			amountchars--;
		}
		cntpos++;
	}
	return (res - holdamount);
}

static size_t	ft_getstart(char const *s, char c)
{
	size_t start;

	start = 0;
	while (s[start] && s[start] == c)
		start++;
	return (start);
}

static size_t	ft_getend(char const *s, char c, size_t len_s)
{
	while (s[len_s] >= 0 && s[len_s] == c)
		len_s--;
	return (len_s);
}

static size_t	ft_getamountchars(char const *s, char c, size_t start, size_t end)
{
	size_t	amountchars;
	
	amountchars = 0;
	while (start <= end)
	{
		if (s[start] == c)
			amountchars++;
		start++;
	}
	return (amountchars);
}

static void 	ft_freeall(char **dest, size_t elems)
{
	size_t cnt;

	cnt = 0;
	while (cnt <= elems)
	{
		free(dest[cnt]);
		dest[cnt] = NULL;
		cnt++;
	}
	free(dest);
	dest = NULL;
}



