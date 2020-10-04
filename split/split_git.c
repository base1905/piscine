#include <stdlib.h>
#include <stdio.h>

void ft_putstr (char *str);

int		g_n_words;

int		is_whitespace(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

int		count_words(char *str)
{
	int    word;
	int number_words;
	int i;

	word = 0;
	number_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_whitespace(str[i]) && word == 0)
		{
			++number_words;
			word = 1;
		}
		else if (is_whitespace(str[i]))
		{
			word = 0;
		}
		++i;
	}
	return (number_words);
}

int		calculate_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !is_whitespace(str[i]))
		++i;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char    **array;
	int        word;
	int        i;
	int        length;

	array = (char **)malloc(count_words(str) * sizeof(char *) + 1);
	word = 0;
	g_n_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_whitespace(str[i]) && word == 0)
		{
			word = 1;
			length = calculate_length(&str[i]);
			array[g_n_words] = (char *)malloc((length + 1) * sizeof(char));
			array[g_n_words] = ft_strncpy(array[g_n_words], &str[i], length);
			++g_n_words;
		}
	else if (is_whitespace(str[i]))
	word = 0;
	++i;
	}
	array[g_n_words] = 0;
	return (array);
}

int main ()
{
	char *str;
	int count;
	char **new;
	int index;

	str = " because fuck you that's why ";
	new = ft_split_whitespaces(str);
	count = count_words(str);
	printf("%d\n", count);
	while ( count > index )
	{
		ft_putstr(new[index]);
		printf("\n");
		index++;
	}
	return (0);
}
