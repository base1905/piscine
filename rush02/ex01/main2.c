/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arannara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 21:44:13 by arannara          #+#    #+#             */
/*   Updated: 2020/03/15 17:01:51 by arannara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include <stdlib.h>


void 	*ft_strdup( void *dynstr, const void *str, unsigned int size)
{
	unsigned int	i;
	char			*new;
	char 			*old;


	new = (char*)dynstr;
	old = (char*)str;

	i = 0;
	while (i < size)
	{
		new[i] = old[i];
		i++;
	}
	return (dynstr);
}

char	*reallocate(char *str, unsigned int size)
{
	char	*new;

	new = (char *)malloc(size);
	ft_strdup(new, str, size / 2);
	free(str);
	return (new);
}

int	main(void)
{
	char	c;
	char	*str;
	int		i;
	int		pointersize;
	int j;

	str = malloc(sizeof(char*));
	i = 0;
	pointersize = 8;
	while ((read(0, &c, 1)))
	{
		str[i++] = c;
		if (i >= pointersize)
		{
			pointersize = pointersize * 2;
			str = reallocate(str, pointersize);
		}
	}

	j = 0;
	while (str[j] != '\0')
	{
		write (1, &str[j], 1);
		j++;
	}

}
