/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = 0;
		y = 0;
		while (argv[2][y])
		{
			if (argv[1][x] == argv[2][y])
				x++;
			y++;
		}
		if (argv[1][x] == '\0')
		{
			x = 0;
			while (argv[1][x])
			{
				write (1, &argv[1][x], 1);
				x++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}