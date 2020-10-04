/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:30:36 by arannara          #+#    #+#             */
/*   Updated: 2020/03/09 11:35:59 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define LEN 42

int		main()
{
	int		i;
	char 	*str;

	str = (char*)malloc(sizeof(str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		printf("%s ", &str[i]);
		i++;
	}
	str[i] = '\0';
	return(0);
}
