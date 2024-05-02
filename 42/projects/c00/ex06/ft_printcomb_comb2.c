/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcomb_comb2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 03:11:52 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/01 03:11:52 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printnum(int x, int y)
{
	if (y != 01)
	{
		ft_putchar(' ');
	}
	ft_putchar((x / 10) + '0' );
	ft_putchar((x % 10) + '0' );
	ft_putchar(' ');
	ft_putchar((y / 10) + '0' );
	ft_putchar((y % 10) + '0' );
	if (x != 98)
	{
		ft_putchar(',');
	}
}

void	ft_printcomb_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	right = 1;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			printnum(left, right);
			right++;
		}
		left ++;
	}
}

/* logic is (xx, yy ) (xx = yy) Print all (xx, yy ) that are diffrent*/
/*int main ()
{
	ft_printcomb_comb2();
}*/