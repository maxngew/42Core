/*
Level 1-4 Test & Pratice File
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