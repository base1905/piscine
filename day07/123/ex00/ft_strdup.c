/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:41:29 by arannara          #+#    #+#             */
/*   Updated: 2020/03/05 23:36:47 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*string;
	int		str_size;
	int		i;

	i = 0;
	str_size = 0;
	while (str[str_size])
	{
		str_size++;
	}
	string = (char *)malloc(str_size * sizeof(*str) + 1);
	if (!string)
		return (NULL);
	while (i < str_size)
	{
		string[i] = str[i];
		i++;
	}
	string[str_size] = '\0';
	return (string);
	free(string);
}
