#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	while(size-1)
	{
		*dst++ = *src++;
		size--;
	}
	return (ft_strlen(src));
}
