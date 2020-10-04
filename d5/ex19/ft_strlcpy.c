unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				counter;
	unsigned int	result;

	result = 0;
	if (dest && src)
	{
		while (src[result] != '\0')
			++result;
		counter = 0;
		while (src[counter] != '\0' && counter < ((int)size - 1))
		{
			dest[counter] = src[counter];
			++counter;
		}
		if (size)
			dest[counter] = '\0';
	}
	return (result);
}
