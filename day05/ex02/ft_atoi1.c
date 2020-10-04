/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 20:24:09 by arannara          #+#    #+#             */
/*   Updated: 2020/03/03 13:38:10 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int negati;

	i = 0;
	nb = 0;
	negati = 0;
	while (str[i] == 32 || str[i] == 127 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negati = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (i >= 26)
			return (0);
		nb = 10 * nb + (str[i] - 48);
		i++;
	}
	if (negati == 1)
		return (-nb);
	return (nb);
}

int main ()
{
printf("%d\n", ft_atoi("-1"));
printf("%d\n",    atoi("-1"));
return (0);
}
