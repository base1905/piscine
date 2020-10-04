#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
write (1, &c, 1);
}

int main()
{

    printf("\u2591\u2592\u2593\n");
	return(0);
}
