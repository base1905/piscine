/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 23:24:46 by casteria          #+#    #+#             */
/*   Updated: 2020/03/08 23:32:21 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBF_H
# define LIBF_H

# include <unistd.h>
# include <stdlib.h>

# define SIZE_OF_DESK 9
# define SIZE_OF_BUFFER 10
# define NUMBER_OF_ARGUMENTS 9

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	***ft_alloc_desk(void);
char	***ft_initialize_desk();
void	ft_display_desk(char ***desk);
int		ft_check_error(int argc, char **argv);
char	***ft_input_arguments(int argc, char **argv, char ***desk);
int		ft_check_cell(int i, int j, char ***desk);
int		ft_check_probs(char ***desk);
void	ft_fill_probs(char ***desk);
void	ft_put_ones(char ***desk);
int		ft_putin_num(int i, int j, char ***desk);
int		ft_cell_sum(int i, int j, char ***desk);
int		ft_check_rcs(int i, int j, int nb, char ***desk);
void	ft_put_prob(int i, int j, int nb, char ***desk);
void	ft_put_ones(char ***desk);
int		ft_sum(int i, int j, char ***desk);
int		ft_solve_sudoku(char ***desk);
void	ft_null(int i, int j, int nb, char ***desk);
void	ft_error_report();
void	ft_null_all(char ***desk);
void	ft_free_memory(char ***desk);

#endif
