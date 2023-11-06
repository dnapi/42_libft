/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:03:58 by apimikov          #+#    #+#             */
/*   Updated: 2023/08/31 09:54:33 by apimikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *charset);
int		word_count(char *str, char *charset);
void	write_word(char **arr, char **str, char *set);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	char	**array;

	len = word_count(str, charset);
	array = (char **)malloc((len + 1) * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	while (*str && i < len)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		write_word(array + i, &str, charset);
		i++;
	}
	*(array + len) = NULL;
	return (array);
}

void	write_word(char **arr, char **str, char *set)
{
	char	*temp;
	int		len;
	int		i;

	temp = *str;
	len = 0;
	while (!is_sep(*temp, set) && *temp)
	{
		len++;
		temp++;
	}
	if (len > 0)
		*arr = (char *)malloc(sizeof(char) * (len + 1));
	i = -1;
	while (++i < len)
	{
		(*arr)[i] = **str;
		(*str)++;
	}
	(*arr)[i] = '\0';
	return ;
}

int	word_count(char *str, char *seps)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], seps))
		{
			i++;
			continue ;
		}
		count++;
		while (!is_sep(str[i], seps) && str[i])
			i++;
	}
	return (count);
}

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}
