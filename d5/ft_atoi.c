int	is_blank(char c)
{
	return (((int)c <= 13 && (int)c >= 9) || (int)c == 32);
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_digit(char c)
{
	return (c <= '9' && c >= '0');
}

int	ft_atoi(char *str)
{
	int i;
	int r;
	int s;
	int l;

	i = -1;
	r = 0;
	s = 0;
	l = -1;
	while (str[++i] != '\0')
	{
		if ((is_blank(str[i]) && r == 0 && s == 0))
			continue;
		else if (is_sign(str[i]) && s == 0 && r == 0)
			s = (str[i] == '+') ? 1 : -1;
		else if (is_digit(str[i]) && ++l < 20)
			r = (r * 10 + ((int)str[i] - 48));
		else
			break ;
	}
	r = (s < 0 ? r * -1 : r);
	if (l > 19)
		r = (s < 0 ? 0 : -1);
	return (r);
}
