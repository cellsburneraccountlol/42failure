/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:31:47 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/09 23:31:47 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*to test :printf("%d\n%d\n%d\n%d\n" , a , b  , *div , *mod );	*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a = 5; 
	int b = 2; 
	int div;
	int mod;
	
	ft_div_mod(a, b, &div ,&mod);
}*/