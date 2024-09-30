/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

int	max(int *tab, unsigned int len)
{
	int	results;
	unsigned int x = 0;

	if (len == 0)
		return (0);
	results = tab[x];
	while (x < len)
	{
		if (results < tab[x])
			results = tab[x];
		x++;
	}
	return (results);
}

#include <stdio.h>

int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	unsigned int	len = 6;

	printf("%d\n", max(tab, len));
}