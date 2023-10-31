/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:37:32 by apimikov          #+#    #+#             */
/*   Updated: 2023/10/30 16:05:53 by apimikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	cc;

	cc = c;
	return ((cc >= 'a' && cc <= 'z') || (cc >= 'A' && cc <= 'Z'));
}
