#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	cnt;

	cnt = 0;
	while (s[cnt] != c)
	{
		if (s[cnt] == '\0')
			return (NULL);
		cnt++;
	}
	return ((char *)(s + cnt));
}
