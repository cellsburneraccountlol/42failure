/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:20:05 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/09 23:20:05 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main()
{
	int x = 5; 
	int y = 3 ;
	printf("%dn%d\n", x , y);
	ft_swap(&x , &y);
	printf("%dn%d\n", x , y);


}*/