/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 15:43:49 by arannara          #+#    #+#             */
/*   Updated: 2020/03/16 17:00:41 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()

{

	int i;
	int *p;


	i = 23;
	p = &i;


	printf("%p", p);

	return(0);
}