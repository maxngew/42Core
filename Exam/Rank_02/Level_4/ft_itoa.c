/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int nbr)
{
	int		n;
	int		len;
	char	*res;

	if (nbr == INT_MIN)
		return ("-2147483648\0");
	n = nbr;
	len = 0;
	if (nbr <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (res);
}