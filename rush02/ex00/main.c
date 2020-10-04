/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 13:09:36 by aerreck           #+#    #+#             */
/*   Updated: 2020/03/14 21:28:59 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	rush(int x, int y);
int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{	
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
		return (0);
	}
	else
		write(1, "\n", 1);
}
