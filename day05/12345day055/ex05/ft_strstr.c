/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:59:00 by arannara          #+#    #+#             */
/*   Updated: 2020/03/03 20:08:25 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int element;
	int sravnenie;

	element = 0;
	if (*to_find == '\0')
		return (str);
	while (str[element] != '\0')
	{
		sravnenie = 0;
		while (str[element + sravnenie] == to_find[sravnenie])
		{
			sravnenie++;
			if (to_find[sravnenie] == '\0')
				return (&str[element]);
		}
		element++;
	}
	return (0);
}
