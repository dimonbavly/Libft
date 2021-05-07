#include "libft.h"
/*@myoriginal*\/
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize) 
{
	size_t	dstlen;
	size_t	srclen;
	dstlen = 0;
	while (dstlen < dstsize)
	{
		if (!dst[dstlen])
			break ;
		dstlen++;
	}
	srclen = ft_strlen(src);
	if (dstlen == dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
	{
		memcpy(dst+dstlen, src, srclen + 1);
	}
	else
	{
		memcpy(dst + dstlen, src, dstlen - 1);
		dst[dstlen + dstsize - 1] = '\0';
	}
	return (dstlen + srclen);
}
*@myoriginal*/

/*@working example*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dst[len] && len < size)
		len += 1;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len += 1;
	}
	if (i < size)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
*@nexttry*/

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize) 
{
	size_t dstlen;
	size_t cnt;
	dstlen = 0;
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	cnt = 0;
	while (src[cnt] && dstlen < dstsize - 1)
	{
		dst[dstlen] = src[cnt];
		dstlen++;
	}
	if (dstlen - cnt-1 < dstsize)
		dst[dstlen] = '\0';
	return (dstlen - cnt + ft_strlen(src));
}
/*@nexttry*/
