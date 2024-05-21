#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	test_isalpha()
{
	printf("%d\n", ft_isalpha(65));
	printf("%d\n", ft_isalpha(97));
	printf("%d\n", ft_isalpha(48));
	printf("%d\n", ft_isalpha(33));
	printf("%d\n", ft_isalpha(32));
	printf("%d\n", ft_isalpha(200));
	printf("%d\n", ft_isalpha(36));
}

int	main()
{
	test_isalpha();
	return (0);
}
