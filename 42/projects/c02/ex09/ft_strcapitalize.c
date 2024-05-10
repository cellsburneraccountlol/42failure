/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:41:12 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 14:41:12 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	printable(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	bool;
	int	i;

	bool = 1 ;
	i = 0 ;
	while (str[i])
	{
		if (bool == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			bool = 0;
		}
		else if (bool == 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32 ;
		}
		else if (printable(str[i]) == 0)
		{
			bool = 1 ;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char str[100] = "A ham sammywich and sm copEE" ;
	printf("%s\n" , str);
	ft_strcapitalize(str);
	printf("%s\n" , str);
}*/