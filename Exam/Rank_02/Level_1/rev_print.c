/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a string, and displays the string in reverse
followed by a newline.

The original string must not be modified.

You must return the string passed as a parameter.

Your function must be declared as follows:

char *rev_print(char *str);

Examples:

int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}

Output :
$> ./a.out | cat -e
dlrow olleH$
$> ./a.out | cat -e
Reverse print$
$> ./a.out | cat -e
$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 2)
	{
		while (argv[1][x])
			x++;
		while (x >= 0)
		{
			write (1, &argv[1][x], 1);
			x--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
