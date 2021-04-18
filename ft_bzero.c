#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (!n)
		return ;
	while (n)
	{
		*s = '\0';
		s++;
		n--;
	}
}
