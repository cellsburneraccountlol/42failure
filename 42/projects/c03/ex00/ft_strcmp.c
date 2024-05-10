#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{

	while(*s1 && (*s1 == *s2))
	{
		*s1 ++;
		*s2 ++;
	}
	return(*s1 - *s2);
}
/*The strcmp() and strncmp() functions return an integer less than,
equal to, or greater than zero if s1 (or the first n bytes
thereof) is found, respectively, to be less than, to match, or be
greater than s2.*/
