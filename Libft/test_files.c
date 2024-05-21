#include "libft.h"

void	test_isalpha()
{
	printf("Testing ft_alpha:\n");
	printf("Testing 'A': %d\n", ft_isalpha(65));
	printf("Testing 'a': %d\n", ft_isalpha(97));
	printf("Testing '0': %d\n", ft_isalpha(48));
	printf("Testing '!': %d\n", ft_isalpha(33));
	printf("Testing ' ': %d\n", ft_isalpha(32));
	printf("Testing Non-ASCII (200): %d\n", ft_isalpha(200));
	printf("Testing ft_alpha: DONE\n");
	printf("\n");
}

void	test_strlen()
{
	printf("Testing ft_strlen:\n");
	const char *str1 = "";
	printf("Testing ft_strlen(\"\"): %zu\n", ft_strlen(str1));
	const char *str2 = "a";
	printf("Testing ft_strlen(\"a\"): %zu\n", ft_strlen(str2));
	const char *str3 = "Hello";
	printf("Testing ft_strlen(\"Hello\"): %zu\n", ft_strlen(str3));
	const char *str4 = "Hello World";
	printf("Testing ft_strlen(\"Hello World\"): %zu\n", ft_strlen(str4));
	const char *str5 = "Hello\nWorld\t!";
	printf("Testing ft_strlen(\"Hello\\nWorld\\t!\"): %zu\n", ft_strlen(str5));
	printf("Testing ft_strlen: DONE\n");
	printf("\n");
}

void	test_substr()
{
	printf("Testing ft_substr:\n");

	char *str1 = "Hello World!";
	char *sub1 = ft_substr(str1, 6, 5);
	printf("Testing ft_substr(\"%s\", 6, 5): \"%s\"\n", str1, sub1);
	free(sub1);

	char *str2 = "1234567890";
	char *sub2 = ft_substr(str2, 3, 4);
	printf("Testing ft_substr(\"%s\", 3, 4): \"%s\"\n", str2, sub2);
	free(sub2);

	char *str3 = "Short";
	char *sub3 = ft_substr(str3, 0, 10);
	printf("Testing ft_substr(\"%s\", 0, 10): \"%s\"\n", str3, sub3);
	free(sub3);

	char *str4 = "Another test string";
	char *sub4 = ft_substr(str4, 13, 10);
	printf("Testing ft_substr(\"%s\", 13, 10): \"%s\"\n", str4, sub4);
	free(sub4);

	char *str5 = "Edge case with start out of bounds";
	char *sub5 = ft_substr(str5, 50, 5);
	printf("Testing ft_substr(\"%s\", 50, 5): \"%s\"\n", str5, sub5);
	free(sub5);

	printf("Testing ft_substr: DONE\n");
	printf("\n");
}

int	main()
{
	test_isalpha();
	test_strlen();
	test_substr();
	return (0);
}
