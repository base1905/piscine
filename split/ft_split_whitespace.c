/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 21:16:25 by arannara          #+#    #+#             */
/*   Updated: 2020/05/21 15:05:59 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int is_space (char c)
{
	if (c == ' ' || c =='\n' || c =='\t')
		return (1);
	else 
		return (0);
}

int countwords (char *str)
{
	int count;
	
	count = 0;
	while (*str)
	{
		while (*str && is_space(*str) == 1)
			str++;
		if (*str && is_space(*str) == 0)
		{
			count++;
			while (*str && is_space(*str) == 0)
					str++;
		}
	}
	return (count);
}

char *wordmalloc(char *str)
{
	int i;
	char *word;
	
	i = 0;
	while (str[i] && is_space(str[i]) == 0)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));

	i = 0;
	while (str[i] && is_space(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}


char **split(char *str)
{
	char **newstr;
	int i;

	i = 0;
	newstr =  (char **)malloc(sizeof(char*) * (countwords(str) + 1));
	//if (newstr == NULL)
	//	return (0);	
	while (*str)
	{
		while (*str && is_space(*str) == 1)
			str++;
		if (*str && is_space(*str) == 0)
		{	
			newstr[i] = wordmalloc(str);
			i++;
			while (*str && is_space(*str) == 0)
				str++;
		}	
	}
	newstr[i] = NULL;
	return(newstr);
}

int main ()
{
	char *str;
	int count;
	char **newstr;
	int i = 0;
	
	str = "  because fuck you thats's why  ";
	count = countwords(str);
	printf("%d\n", count);
	newstr = split(str);

	while (i < count )
	{
		printf("%s\n", newstr[i]);
		i++;
	}
	return(0);
}
