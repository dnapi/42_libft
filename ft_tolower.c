/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:19:11 by apimikov          #+#    #+#             */
/*   Updated: 2023/11/03 14:19:26 by apimikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	r;

	r = (unsigned char)c;
	if (r >= 'A' && r <= 'Z')
		return (c + 'a' - 'A');
	else
		return (c);
}
