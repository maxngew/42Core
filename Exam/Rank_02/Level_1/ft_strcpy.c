/*
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s2[x] != '\0')
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x] = '\0';
	return (s1);
}
