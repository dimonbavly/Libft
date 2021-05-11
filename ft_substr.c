#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if ((size_t)start >= len)
	{
		res = malloc(sizeof(*res));
		if (!res)
			return (NULL);
		*res = '\0';
		return (res);
	}
	res = malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, s + start, len);
	res[len] = '\0';
	return (res);
}

