/*
Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	count;

	if (argc == 2)
	{
		x = 0;
		count = 0;
		while (argv[1][x] == 32 || argv[1][x] == 9)
			x++;
		while (argv[1][x])
		{
			if (argv[1][x] == 32 || argv[1][x] == 9)
				count = 1;
			if (argv[1][x] != 32 && argv[1][x] != 9)
			{
				if (count)
					write (1, " ", 1);
				count = 0;
				write (1, &argv[1][x], 1);
			}
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}