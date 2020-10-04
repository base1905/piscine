/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerreck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 13:12:29 by aerreck           #+#    #+#             */
/*   Updated: 2020/03/01 14:54:08 by aerreck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_write(int x, int y, int i, int n)
{
	char c;

	c = ' ';
	if ((i < y && i > 1) || (n < x && n > 1))
		c = ' ';
	if (i == 1 || i == y)
		c = 'B';
	if (n == 1 || n == x)
		c = 'B';
	if (i == y && n == x)
		c = 'A';
	if (i == 1 && n == x)
		c = 'C';
	if (i == y && n == 1)
		c = 'C';
	if (i == 1 && n == 1)
		c = 'A';
	ft_putchar(c);
}

void	rush(int x, int y)
{
	int i;
	int n;

	if (x < 1 || y < 1)
		return ;
	i = 1;
	while (i <= y)
	{
		n = 1;
		while (n <= x)
		{
			ft_write(x, y, i, n);
			n++;
		}
		ft_putchar('\n');
		i++;
	}
}
