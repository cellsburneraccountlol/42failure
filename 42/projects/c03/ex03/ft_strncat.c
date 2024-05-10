char *ft_strncat(char *dest, char *src, unsigned int nb)
{

	char *str;

	str = dest;
	while (*dest)
	{
		dest ++;
	}

	int i = 0;
	while( i < nb && (*src != '\0'))
	{
		*dest = *src;
		dest++; 
		src++;
	}
	*dest = '\0';

	return(str);

}