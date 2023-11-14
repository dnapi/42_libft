/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:13:34 by apimikov          #+#    #+#             */
/*   Updated: 2023/11/14 10:17:25 by apimikov         ###   ########.fr       */
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
	int			sign;
	long long 	answ;
	long long	llong_max_10; 

	sign = 1;
	answ = 0;
	llong_max_10 = ((unsigned long long)(-1))/2/10;

	while ((8 < *str && *str < 14) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str != '\0' && '0' <= *str && *str <= '9')
	{
	if (answ < llong_max_10 || (answ == llong_max_10 && *str < '8'))
			 answ = answ * 10 + ((*str++) - '0');
	else
		return (inv_sign(sign));
	}
	return ((int)(sign * answ));
}
