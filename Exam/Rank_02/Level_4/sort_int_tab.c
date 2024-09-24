/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	x;
	int				temp;

	x = 0;
	while (x < (size - 1))
	{
		if (tab[x] > tab[x + 1])
		{
			temp = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = temp;
			x = 0;
		}
		else
			x++;
	}
}