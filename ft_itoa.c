#include "libft.h"
#include <stdlib.h>
//static int ft_abs(int nbr);
char *ft_itoa(int n)
{
	int cnt;
	int tmp_n;
	int sign;
	char buf[12];
	char *str;
	
	//
	if (n < 0)
		sign = -1;
	else
		n  = -n;
	//
	//
	tmp_n = n;
	cnt = 0;
	while (tmp_n / 10 < 0)
	{
		buf[cnt] =	-(tmp_n % 10) + '0';
		tmp_n = tmp_n / 10;
		cnt++;
	}
	if (tmp_n / 10 == 0)
	{
		buf[cnt] = -(tmp_n % 10) + '0';
		cnt++;
	}
		
	if (sign == -1)
		buf[cnt++] = '-';
	buf[cnt] = '\0';

	//
	//
	str = malloc(sizeof(*str) * (cnt + 1));
   	if (!str)
		return (NULL);
	//
	//
	tmp_n = 0;
	while (buf[tmp_n])
		str[tmp_n++] = buf[cnt-- - 1];
	str[tmp_n] = '\0';
	return (str);

}


