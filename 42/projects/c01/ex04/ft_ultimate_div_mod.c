/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 00:32:33 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 00:32:33 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}

/*int main()
{
	int a = 5;
	int b = 3;
	printf("%dn%d",a,b);
	ft_ultimate_div_mod(&a , &b);
	printf("%dn%d",a,b);

}*/