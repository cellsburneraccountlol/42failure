/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:58:51 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 17:58:51 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printchars(char *arr, char *str, int i)
{
	ft_putchar('\\');
	if (str[i] < 16)
	{
		ft_putchar('0');
		ft_putchar(arr[(int)str[i]]);
	}
	else
	{
		ft_putchar(arr[str[i] / 16]);
		ft_putchar(arr[str[i] % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*arr;

	arr = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			printchars(arr, str, i);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*int main()
{
	char *str = "Coucou\ntu vas bien ?";
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	ft_putstr_non_printable(str);
}*/