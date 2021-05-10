#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*res;

	res = malloc(size * count);
	if (!res)
		return (NULL);
	ft_bzero(res, count);
	return (res);
}
