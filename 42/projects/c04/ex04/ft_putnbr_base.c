#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(*str)
	{
		str++;
		i++ ; 
	}
	return (i);
}

void	write_num(long int num, char *base, int n)
{
	if (num >= n)
	{
		write_num(num / n, base, n);
	}
	write(1, &base[num % n], 1);
}

int	check_base(char *base)
{
	char	*based;
	int		n;

	n = ft_strlen(base);
	based = base;
	if (n < 2)
	{
		return (0);
	}
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		base++;
	}
	while (*based != '\0')
	{
		base = based + 1;
		while (*base != '\0')
		{
			if (*base++ == *based)
				{
					return (0);
				}
		}
		based++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			n;
	long int	num;

	num = nbr;
	n = ft_strlen(base);
	if (check_base(base) == 0)
	{
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	write_num(num, base, n);
}

int main()
{
	ft_putnbr_base(-1230, "01234");
}
