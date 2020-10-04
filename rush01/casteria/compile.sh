#!/bin/sh

gcc -Wall -Wextra -Werror -c ft/ft_*.c
norminette ft/*.c -R CheckForbiddenSourceHeader
ar rc libf.a ft_*.o
gcc -o sudoku ft/main.c -L. -lf
