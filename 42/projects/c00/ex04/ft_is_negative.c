/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:54:34 by cchoong           #+#    #+#             */
/*   Updated: 2024/04/30 17:54:34 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_is_negative(int n)
{
	char	nnnn;
	char	p;

	nnnn = 'N';
	p = 'P' ;
	if (n < 0)
	{
		write (1, &nnnn, 1);
	}
	else
	{
		write (1, &p, 1);
	}
}
