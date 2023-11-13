/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:13:34 by apimikov          #+#    #+#             */
/*   Updated: 2023/11/13 16:05:38 by apimikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	inv_sign(int sign)
{
	if (sign > 0)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	sign;
	long	answ;
	long	temp;

	sign = 1;
	answ = 0;
	while ((8 < *str && *str < 14) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str != '\0' && '0' <= *str && *str <= '9')
	{
		temp = answ * 10 + (*str++) - '0';
		if (temp >= answ)
			answ = temp;
		else
			return (inv_sign(sign));
	}
	return ((int)(sign * answ));
}
