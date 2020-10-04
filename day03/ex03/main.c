#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	  *div = a / b;
	    *mod = a % b;
}

int main()
{
	int a = 41;
	int b = 11;
	int *div;
	int *mod;

	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);

	return(0);
}

