/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 18:44:36 by arannara          #+#    #+#             */
/*   Updated: 2020/02/29 18:50:45 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int count;

	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		count = nb * ft_recursive_power(nb, power - 1);
		return (count);
	}
	else
	{
		return (1);
	}
}
