#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*pnt;

	pnt = b;
	while (len--)
	{
	//	*pnt = (unsigned char)0;
		*pnt = 0;
		pnt++;
	}
}
