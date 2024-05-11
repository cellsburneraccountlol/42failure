#include <stdio.h> 

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
	}
	while ((*str == '-') || (*str == '+'))
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + ((int)*str - '0');
		str++;
	}
	return (num * sign);
}


/*int main()
{
   char *arstr = "                       ---+--+121231341  231  231 adadawddawd 567";
   int x = (ft_atoi(arstr));
   printf("%d",x );
}*/

    