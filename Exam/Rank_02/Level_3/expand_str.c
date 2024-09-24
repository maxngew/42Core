/*
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
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
		while (argv[1][x] == 32 || argv[1][x] == 9)
			x++;
		while (argv[1][x])
		{
			if (argv[1][x] == 32 || argv[1][x] == 9)
				count = 1;
			if (argv[1][x] != 32 && argv[1][x] != 9)
			{
				if (count)
					write (1, "   ", 3);
				count = 0;
				write (1, &argv[1][x], 1);
			}
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}