/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:02:16 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 22:02:16 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	checknprint(int x[], int n)
{
	int i;
	int yes;

	i = 0;
	yes = 1;
	while (i < n - 1)
	{
		if (!(x[i] < x[i + 1]))
			yes = 0;
		i++;
	}
	if (yes == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(x[i]);
			i++;
		}
		if (x[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	create_while(int x[], int k, int n)
{
	if (k == n - 1)
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			if (n == 9 && x[0] > '1')
				break ;
			checknprint(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			create_while(x, k + 1, n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int x[n];

	create_while(x, 0, n);
}
