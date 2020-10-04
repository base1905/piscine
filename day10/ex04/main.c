/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:34:34 by arannara          #+#    #+#             */
/*   Updated: 2020/03/10 23:04:44 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		index;

	i = 0;
	index = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			index++;
		i++;
	}
	return (index);
}

int ft_islower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char **arr = { "one", "two", "D" };
	printf("ft_any: %d", ft_count_if(**arr, &ft_islower));
	return 0;
}


