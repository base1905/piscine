/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fermelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:54:09 by fermelin          #+#    #+#             */
/*   Updated: 2020/03/15 21:57:40 by fermelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void    *ft_strdup( char *dynstr, char *str, unsigned int size);
void	xy_counter(int *x, int *y, char *str);
char    *reallocate(char *str, unsigned int size);
int     check_first(char first, char middle, char last, char *str);
int     check_last(char first, char middle, char last, char *str);
int     check_vertical(char middle, char *str);
void    check(char *input);
void    print_rush(int rush, int count);
void    print_result(void);

int g_rushes[5];
int x;
int y;

#endif
