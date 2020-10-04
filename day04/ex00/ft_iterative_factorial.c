/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:51:35 by arannara          #+#    #+#             */
/*   Updated: 2020/02/29 14:56:08 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
