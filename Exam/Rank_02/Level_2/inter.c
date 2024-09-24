/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	unsigned char	printed[256] = {0};

	if (argc == 3)
	{
		x = 0;
		while (argv[1][x])
		{
			y = 0;
			while (argv[2][y])
			{
				if (argv[1][x] == argv[2][y])
				{
					if (!printed[(unsigned char)argv[1][x]])
					{
						write (1, &argv[1][x], 1);
						printed[(unsigned char)argv[1][x]] = 1;
					}
					break;
				}
				y++;
			}
			x++;
		}
	}
	write (1, "\n", 0);
	return (0);
}