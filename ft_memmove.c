#include "libft.h"
void	*memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;
	
	if (dest < src)
	{
		d = (char*)dest;
		s = (char*)src;
		while (n)
		{
			d++;
			s++;
			n--;
		}
	}
	else
	{
		d = (char*)dest + (n - 1);
		s = (char*)src + (n - 1);
		while (n)
		{
			d--;
			s--;
			n--;
		}
	}
	return (dest);
}
