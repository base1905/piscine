/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 18:03:31 by arannara          #+#    #+#             */
/*   Updated: 2020/03/07 18:19:15 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if(s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else if (s2[j] == '*')
		{	
			while (s2[j] == '*')
				j++;
			while (s1[i] != s2[j] && s1[i] != '\0')
				i++;
		}
		else
		return (0);
	}	
	return (1);
}

int main(void)
{
printf("%d\n\n", match("all the luck u got", "all * got"));
}
