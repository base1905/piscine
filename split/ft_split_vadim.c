/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 20:12:28 by fermelin          #+#    #+#             */
/*   Updated: 2020/03/17 14:00:52 by fermelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		word_counter(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (*str != '\0')
	{
		if ((*str != '\n' && *str != '\t' && *str != ' ') && *str != '\0')
			count++;
		while ((*str != '\n' && *str != '\t' && *str != ' ') && *str != '\0')
			str++;
		while ((*str == '\n' || *str == '\t' || *str == ' ') && *str != '\0')
			str++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0' && str[i] != '\t')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		i;
	int		j;
	int		r;
	char	*ptr;
	int		size;

	i = word_counter(str);
	result = (char **)malloc(sizeof(char **) * (i + 1));
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		ptr = &str[i];
		size = ft_strlen(ptr);
		result[j] = (char *)malloc(sizeof(char) * (size + 1));
		r = 0;
		while (str[i] != '\0' && str[i] != '\n' && str[i] != '\t' &&
				str[i] != ' ')
		{
			result[j][r] = ptr[r];
			r++;
			i++;
		}
		result[j][r] = '\0';
		j++;
	}
	return (result);
}



int		main(void)
{
	char s[] = "   Hello  \t world \n\t    I am Vadim ";
	char **mass = ft_split_whitespaces(s);
	int i = 0;
	int r;

	r = word_counter(s);
	while (i < r)
	{
		printf("%s\n", mass[i]);
		i++;
	}
	printf("\n%d\n", r);

	return (0);

}
