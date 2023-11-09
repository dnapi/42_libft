/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:13:34 by apimikov          #+#    #+#             */
/*   Updated: 2023/11/07 11:03:15 by apimikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	sign;
	size_t		i;
	long long	answ;

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
		answ = answ * 10 + str[i] - '0';
		i++;
	}
	return (sign * answ);
}
