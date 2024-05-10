/*The strcmp() function compares the two strings s1 and s2. It returns an integer less than, 
equal to, or greater than zero if s1 is found, respectively, to be less than, to match, 
or be greater than s2.The strncmp() function is similar, except 
it only compares the first (at most) n bytes of s1 and s2. */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
		*s1++;
		*s2++;
		i++;
	}
	return (0);
}
