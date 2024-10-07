/*
Level 1-4 Test & Pratice File
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	if (argc == 2)
	{
		x = 0;
		while (argv[1][x])
		{
			if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				argv[1][x] = argv[1][x] + 32;
				write (1, "_", 1);
			}
			write (1, &argv[1][x], 1);
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}