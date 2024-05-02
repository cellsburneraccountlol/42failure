/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:45:50 by cchoong           #+#    #+#             */
/*   Updated: 2024/04/30 17:45:50 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i ;

	i = (122);
	while (i > 97)
	{
		write(1, &i, 1);
		i--;
	}
}
