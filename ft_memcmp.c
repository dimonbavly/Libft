#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *f;
	char *s;
	f = (char*)s1;
	s = (char*)s2;
	while(n)
	{
		if (*f != *s)
			break ;
		f++;
		s++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*f-*s);
}
