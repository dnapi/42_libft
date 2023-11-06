/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:46:25 by apimikov          #+#    #+#             */
/*   Updated: 2023/11/06 16:21:47 by apimikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	num;
	
	num = count * size;
//	if (!size || !count)
//		return (NULL);
//	if (count && size && ( !(num % size == 0) && !(num % count == 0)))
//		return (NULL);
	ptr = (void *)malloc(num);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
