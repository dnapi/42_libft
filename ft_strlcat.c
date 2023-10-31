#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;

	len_s = 0;
	len_d = 0;
	while (src[len_s])
		len_s++;
	while (dst[len_d] && len_d <=dstsize)
		len_d++;
	if (dstsize == 0 || dstsize <= len_d)
		return (len_s + dstsize);
	while (*dst)
	{
		dst++;
		dstsize--;
	}
	while (--dstsize > 0  && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (len_s + len_d);
}
