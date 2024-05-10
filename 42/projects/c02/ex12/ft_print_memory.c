/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchoong <liangchoong@protonmail.me>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:46:22 by cchoong           #+#    #+#             */
/*   Updated: 2024/05/10 21:46:22 by cchoong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	initvar(int *i , int *j , int *base_type)
{
    *i = 0;
    *j = 8;
    *base_type = 16;
}

/* print mem address */
void	ft_print_address(int nbr, char *hex)
{
    int	add[9];                                             
    int	i;
    int	j;
    int	base_type;

    initvar(&i, &j, &base_type);
    if(nbr == 0)
        while(j-- > 0)
            write(1, "0", 1);
    else
    {
        while (nbr)
        {
            add[i] = nbr % base_type;
            nbr /= base_type;
            i++;
        }
        j = (8 - i);
        while(j-- > 0)
            write(1, "0", 1);
        while (i > 0)
            write(1, &hex[add[--i]], 1);
    }
    write(1 , ": " , 3);
}

/* print hex values */
void ft_print_hex(int i, unsigned int size, unsigned char *p, char *hex)
{
    unsigned int    j;

    j = 0;
    while ((j < 16) && (i + j < size))
    {
        write(1, &hex[(*(p + i + j) / 16) % 16], 1);
        write(1, &hex[*(p + i + j) % 16], 1);
        if (j % 2)                                          
            write(1, " ", 1);
        j++;
    }
    while (j < 16)
    {
        write(1, "  ", 2);
        if (j % 2)
            write(1, " ", 1);
        j++;
    }
}

/* print ascii */
void ft_print_char(int i, unsigned int size, unsigned char *p)
 {  
    unsigned int    j;

    j = 0;
    while ((j < 16) && (i + j < size))
    {
        if (*(p + i + j) >= 32 && *(p + i + j) <= 126)
            write(1, &(*(p + i + j)), 1);
        else
            write(1, ".", 1);
        j++;
    }
 }

/* print address + hex values + ascii values */
void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int    i;
    unsigned char   *p;
    char            *hex;

    i = 0;
    p = (unsigned char *)addr;
    hex = "0123456789abcdef";
    while (i < size)
    {
        ft_print_address(i, hex);
        ft_print_hex(i, size, p, hex);
        ft_print_char(i, size, p);
        write(1, "\n", 1);
        i = i + 16;
    }
    return (addr + i);
}

/*int main()
{
    unsigned char array[] = "Hello, World! This is a sample string.";
    unsigned int array_size = sizeof(array);
    ft_print_memory(array , array_size);
}*/
