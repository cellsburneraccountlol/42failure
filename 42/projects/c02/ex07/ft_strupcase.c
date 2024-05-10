/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:48:43 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 13:48:43 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char test[20] = "aaCaacaBBBBB" ;
	printf("%s\n" , test);
	ft_strupcase(test);
	printf("%s\n" , test);
}*/