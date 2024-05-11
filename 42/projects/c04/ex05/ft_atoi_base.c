/*string length */
int	ft_strlen(char *str)
{
	int i = 0;
	while(*str)
	{
		str++;
		i++ ; 
	}
	return (i);
}
/*check base has correct params*/
int	check_base(char *base)
{
	char	*based;
	int		n;

	n = ft_strlen(base);
	based = base;
	if (n <= 1)
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-'
			|| (*base >= '\t' && *base <= '\r') || *base == ' ')
			return (0);
		base++;
	}
	while (*based != '\0')
	{
		base = based + 1;
		while (*base != '\0')
		{
			if (*base++ == *based)
				return (0);
		}
		based++;
	}
	return (1);
}
/*check if a exist in base,if yes return its location in base*/
int	atoibase(char a, char *base)
{
	int	n;

	n = 0;
	while (a != *base && *base != '\0')
	{
		base++;
		n++;
		if (*base == '\0')
		{
			n = -1;
		}	
	}
	return (n);
}
/*loop through str ,get *str[i] value
increase num power(shift left), add i 
to num */
int	stratoibase(char *str, char *base)
{
	int	num;
	int	i;
	int	n;

	num = 0;
	n = ft_strlen(base);
	while (*str)
	{
		i = atoibase(*str++, base);
		if (i == -1)
			break ;
		num = num * n ;
		num = num + i;
	}
	return (num);
}
/*check that str has correct params,
return sum of str in base */
int	ft_atoi_base(char *str, char *base)
{
	int	sign;

	sign = 1;
	if (check_base(base) == 0)
		return (0);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (stratoibase(str, base) * sign);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("abc", "abc"));
}