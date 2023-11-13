/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:13:34 by apimikov          #+#    #+#             */
/*   Updated: 2023/11/13 10:32:14 by apimikov         ###   ########.fr       */
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
	size_t	i;
	long	answ;
	long	temp;

	sign = 1;
	i = 0;
	answ = 0;
	while ((8 < str[i] && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] != '\0' && '0' <= str[i] && str[i] <= '9')
	{
		temp = answ * 10 + str[i++] - '0';
		if (temp >= answ)
			answ = temp;
		else
			return (inv_sign(sign));
	}
	return ((int)(sign * answ));
}
