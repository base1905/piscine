/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerreck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 13:12:29 by aerreck           #+#    #+#             */
/*   Updated: 2020/03/01 14:43:55 by aerreck          ###   ########.fr       */
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
		c = '-';
	if (n == 1 || n == x)
		c = '|';
	if (i == y && n == x)
		c = 'o';
	if (i == 1 && n == x)
		c = 'o';
	if (i == y && n == 1)
		c = 'o';
	if (i == 1 && n == 1)
		c = 'o';
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
