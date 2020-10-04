/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:41:29 by arannara          #+#    #+#             */
/*   Updated: 2020/03/15 15:58:39 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char  *ft_strdup(char *src)
{
	int i;
	int elementi;
	char *stroka;

	elementi = 0;
	i = 0;
	stroka = (char*)malloc(sizeof(*stroka) * (elementi + 1));
	if (NULL == stroka)
	{
		return (NULL);
	}
	while (src[elementi] != '\0')
		elementi++;
	while (i < elementi)
	{
		stroka[i] = src[i];
		i++;
	}
	stroka[elementi] = '\0';
	return (stroka);
	free (stroka);
}

int main()
{
	printf("%s", ft_strdup("base"));
	return(0);
	}
