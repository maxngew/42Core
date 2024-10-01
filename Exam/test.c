#include <unistd.h>

int	ft_atoi(char *s)
{
	int res = 0;

	while (*s)
		res = res * 10 + *s++ - '0';
	return (res);
}

void	printhex(int n)
{
	char	hex[] = "0123456789abcdef";

	if (n >= 16)
		printhex(n / 16);
	write (1, &hex[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printhex(ft_atoi(argv[1]));
	write (1, "\n", 1);
}