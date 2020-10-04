char	*ft_strlowcase2(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
  int i;
  
  i = 0;
  ft_strlowcase2(str);
  while(str[i])
  {
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    else if (str[i] == ' ')
      if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
        str[i + 1] = str[i + 1] - 32;
  i++;
  }
  return(str);
}
