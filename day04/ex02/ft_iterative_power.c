/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 18:37:32 by arannara          #+#    #+#             */
/*   Updated: 2020/02/29 18:39:22 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int count;

	if (power < 0)
	{
		return (0);
	}
	count = 1;
	i = 0;
	while (i < power)
	{
		count = count * nb;
		i++;
	}
	return (count);
}
