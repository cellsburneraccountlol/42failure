/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 01:50:36 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 01:50:36 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	sz;
	int	i;

	sz = size / 2;
	i = 0;
	while (i <= sz)
	{
		ft_swap(&tab[i], &tab[size -1 - i]);
		i++ ;
	}
}

/*int main()
{
	int arr[5] = {1,2,3,4,5};
	int i = 0;
	
	ft_rev_int_tab(arr , 5);
	
	while(i < 5)
	{
		printf("%d", arr[i]);
		i++;
	}

}remember to change all intances
 of "size" when testing" */