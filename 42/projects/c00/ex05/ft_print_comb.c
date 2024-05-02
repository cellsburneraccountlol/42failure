/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:06:37 by cchoong           #+#    #+#             */
/*   Updated: 2024/04/30 18:06:37 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	commaspace(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	printarraynum(int arr[] )
{
	ft_putchar(arr[0]);
	ft_putchar(arr[1]);
	ft_putchar(arr[2]);
	if (arr[0] + arr[1] + arr[2] != 24)
	{
		commaspace();
	}
}

void	ft_print_comb(void)
{
	int	numarr[3];
	
	numarr[0] = '0';
	while (numarr[0] <= '9' )
	{
		numarr[1] = '0';
		while (numarr[1] <= '9')
		{
			numarr[2] = '0';
			while (numarr[2] <= '9')
			{
				if (numarr[0] < numarr [1] && numarr[1] < numarr[2])
				{
					printarraynum(numarr);
				}
				numarr[2]++;
			}
			numarr[1]++;
		}
		numarr[0]++;
	}
}

/* logic here = lowest 012 , masx 789 , means case abc , a < b < c */
/*int	main(void)
{
	ft_print_comb();
}*/
