/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:48:47 by cchoong           #+#    #+#             */
/*   Updated: 2024/04/30 17:48:47 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i ;

	i = (48);
	while (i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}

int main()
{
	ft_print_numbers();
}