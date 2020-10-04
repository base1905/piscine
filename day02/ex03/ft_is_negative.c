/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 23:33:55 by arannara          #+#    #+#             */
/*   Updated: 2020/02/27 23:35:49 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar(‘N’);
	}
	else
	{
		ft_putchar(‘P’);
	}
}
