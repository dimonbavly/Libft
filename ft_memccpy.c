#include "libft.h"
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	while (n)
	{
		*d = *s;
		if (*s == (unsigned char) c)
			return (++d);
		d++;
		s++;
		n--;
	}
	return (NULL);
}
