/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 02:33:52 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 02:33:52 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size -1)
	{
		j = 0 ;
		while (j < size - 1)
		{
			if (tab[j] > tab[j +1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

/*int main()
{
	int arr[7] = {7,7,7,7,7,7,7};
	int i = 0 ;
	ft_sort_int_tab(arr , 7 );
	i = 0 ;
	while (i < 7)
	{
		printf("%d " , arr[i]);
		i++ ; 
	}

}*/