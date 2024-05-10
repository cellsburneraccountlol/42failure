/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:51:42 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 13:51:42 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char test[20] = "aaCaacaBBBBB" ;
	printf("%s\n" , test);
	ft_strlowcase(test);
	printf("%s\n" , test);
}*/