/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

void	lastword(char *str)
{
	int	x = 0;
	int	y = 0;

	while (str[x])
	{
		if ((str[x] == 32 || str[x] == 9) && str[x + 1] >= 33 && str[x + 1] <= 126)
			y = x + 1;
		x++;
	}
	while (str[y] >= 33 && str[y] <= 127)
	{
		write (1, &str[y], 1);
		y++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		lastword(argv[1]);
	write (1, "\n", 1);
	return (0);
}