/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:59:00 by arannara          #+#    #+#             */
/*   Updated: 2020/03/07 22:08:54 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int element;
	int index;

	element = 0;
	if (*to_find == '\0')
		return (str);
	while (str[element] != '\0')
	{
		index = 0;
		while (str[element + index] == to_find[index])
		{
			index++;
			if (to_find[index] == '\0')
				return (&str[element]);
		}
		element++;
	}
	return (0);
}
