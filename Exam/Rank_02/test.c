/*
Level 1-4 Test & Pratice File
*/

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#include <unistd.h>

void	write_word(char *start, char *end)
{
	while (start < end)
	{
		write (1, start, 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*start;
	char	*end;

	if (argc > 1)
	{
		str = argv[1];
		while (*str == 32 || *str == 9)
			str++;
		start = str;
		while (*str && *str != 32 && *str != 9)
			str++;
		end = str;
		while (*str == 32 || *str == 9)
			str++;
		if (*str)
		{
			while (*str)
			{
				if (*str == 32 || *str ==9)
				{
					while (*str == 32 || *str == 9)
						str++;
					if (*str)
						write (1, " ", 1);
				}
				else
				{
					write (1, str, 1);
					str++;
				}
			}
			write (1, " ", 1);
		}
		write_word(start, end);
	}
	write (1, "\n", 1);
}