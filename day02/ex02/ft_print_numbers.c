/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 23:00:04 by arannara          #+#    #+#             */
/*   Updated: 2020/02/28 10:12:50 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);
{
	write(1, &c, 1);
	return (0);
}
void	ft_print_numbers(void)
{
	int c;

	c = ‘0’;
	while (c <= ‘9’)
	{
		ft_putchar(c);
		c++;
	}
}
int main(void)
{
	ft_print_numbers();
	return (0);
}
