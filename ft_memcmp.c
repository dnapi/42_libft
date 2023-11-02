/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:49:18 by apimikov          #+#    #+#             */
/*   Updated: 2023/11/02 11:03:52 by apimikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *p1;
	unsigned char *p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i)
	{
		if (p1[i] != p2[i])
			break;
		i++;
	}
	if (i == n)
		return (0);
	else 
		return (p1[i] - p2[i]);
}
