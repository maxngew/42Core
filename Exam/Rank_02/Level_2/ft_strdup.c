/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x = 0;
	int		length = 0;
	char	*dest;

	while (src[length])
		length++;
	dest = (char *)malloc(sizeof(*dest) * (length + 1));
	if (!dest)
		return (NULL);
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}