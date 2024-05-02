/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:21:38 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/02 14:21:38 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*print an int with putchar max length =2147483647 min =-2147483648 */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	overflow(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		overflow();
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

/*check if nb is negative,if yes change to positive,add '-'* ,
if nb is min int,do overflow */
/*if all normal , recusive call putnbr , 
every /10 removes 1 digit , 
every %10 prints last digits loops tillnb <10 */
/*int	main(void)
{
	ft_putnbr(983648);
}
*/