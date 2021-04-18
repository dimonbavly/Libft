#include "libft.h"
#include <stdio.h>
int main()
{
	void *b[12];
	
	memset(b, '\0', 12);
	memset(b, 'c', 4);
	printf("%s\n", (unsigned char*)b);
	
	ft_memset(b, '\0', 12);
	ft_memset(b, 't', 4);
	printf("%s\n", (unsigned char*)b);

}

