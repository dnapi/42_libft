/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:22:19 by apimikov          #+#    #+#             */
/*   Updated: 2023/11/03 14:27:48 by apimikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	r;

	r = (unsigned char)c;
	if (r >= 'a' && r <= 'z')
		return (c + 'A' - 'a');
	else
		return (c);
}
