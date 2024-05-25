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

void	test_strlcpy()
{
	printf("Testing ft_strlcpy:\n");

	char dest[25];
	const char	*src = "Hello World!";
	size_t destsize = sizeof(dest);

	printf("Testing src = 'Hello World!'\n");

	size_t result = ft_strlcpy(dest, src, destsize);
    printf("Testing1: Result = %zu, Dest = '%s'\n", result, dest);

	const char *empty_src = "";
    result = ft_strlcpy(dest, empty_src, destsize);
    printf("Testing2: Result = %zu, Dest = '%s'\n", result, dest);

    char empty_dest[1];
    result = ft_strlcpy(empty_dest, src, sizeof(empty_dest));
    printf("Testing3: Result = %zu, Dest = '%s'\n", result, empty_dest);

	char small_dest[5];
    result = ft_strlcpy(small_dest, src, sizeof(small_dest));
    printf("Testing4: Result = %zu, Dest = '%s'\n", result, small_dest);

    char zero_dest[1];
    result = ft_strlcpy(zero_dest, src, sizeof(zero_dest));
    printf("Testing5: Result = %zu, Dest = '%s'\n", result, zero_dest);

	printf("Testing ft_strlcpy: DONE\n");
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

void	test_strjoin()
{
	printf("Testing ft_strjoin:\n");

	printf("Testing1, str1:\"Hello\" str2:\"World\": %s\n", ft_strjoin("Hello", "World"));
	printf("Testing2, str1:\"Hello\" str2:\"\": %s\n", ft_strjoin("Hello", ""));
	printf("Testing3, str1:\"\" str2:\"\" %s\n", ft_strjoin("", ""));
	printf("Testing4: str1:\"\" str2:\"Hello\" %s\n", ft_strjoin("", "Hello"));

	printf("Testing ft_strjoin:DONE\n");
	printf("\n");
}

void	test_strtrim()
{
	printf("Testing ft_strtrim:\n");

	const char	*s1;
	const char	*set;
	char		*res;

	s1 = "  Hello  World!  ";
	set = " ";
	res = ft_strtrim(s1, set);
	printf("Testing1: '%s' trimmed is '%s'\n", s1, res);
	free(res);

	s1 = "?Hello World!?";
	set = "?";
	res = ft_strtrim(s1, set);
	printf("Testing2: '%s' trimmed is '%s'\n", s1, res);
	free(res);

	s1 = "	";
	set = " ";
	res = ft_strtrim(s1, set);
	printf("Testing3: '%s' trimmed is '%s'\n", s1, res);
	free(res);

	s1 = "Hello World";
	set = "xyz";
	res = ft_strtrim(s1, set);
	printf("Testing4: '%s' trimmed is '%s'\n", s1, res);
	free(res);

	s1 = "";
	set = "";
	res = ft_strtrim(s1, set);
	printf("Testing5: '%s' trimmed is '%s'\n", s1, res);
	free(res);

	s1 = "Hello, World";
	set = ",";
	res = ft_strtrim(s1, set);
	printf("Testing5: '%s' trimmed is '%s'\n", s1, res);
	free(res);

	printf("Testing ft_strtrim: DONE\n");
	printf("\n");
}

void	test_split()
{
	char **result;

	printf("Testing ft_split:\n");

	result = ft_split("Hello,World,This,Is,Me", ',');
	printf("Testing1: 'Hello,World,This,Is,Me' & ','\n");
	for (int x = 0; result[x] != NULL; x++)
	{
		printf("%s", result[x]);
		if (result[x + 1] != NULL)
			printf(" ");
		free(result[x]);
	}
	free(result);
	printf("\n");

	result = ft_split("Hello", ',');
	printf("Testing2: 'Hello', & ','\n");
	for (int x = 0; result[x] != NULL; x++)
    {
        printf("%s\n", result[x]);
        free(result[x]);
    }
    free(result);

	result = ft_split("", ',');
	printf("Testing3: ' ', ' '\n");
	if (result[0] == NULL)
		printf("Empty String\n");
	free (result);

	result = ft_split("a,b,c,d,e", ',');
	printf("Testing4: 'a,b,c,d,e' & ','\n");
	for (int x = 0; result[x] != NULL; x++)
    {
        printf("%s", result[x]);
		if (result[x + 1] != NULL)
			printf(" ");	
        free(result[x]);
    }
    free(result);
	printf("\n");

	printf("Testing ft_split: DONE\n");
	printf("\n");
}

void	test_itoa()
{
	printf("Testing ft_itoa:\n");

	int number = 12345;
	char *result = ft_itoa(number);
	printf("Testing1: Convert '%d' into '%s'\n", number, result);
	free(result);

	int number1 = -9876;
	char *result1 = ft_itoa(number1);
	printf("Testing2: Convert '%d' into '%s'\n", number1, result1);
	free(result1);

	int number2 = 0;
	char *result2 = ft_itoa(number2);
	printf("Testing3: Convert '%d' into '%s'\n", number2, result2);
	free(result2);

	int number3 = 00012345;
	char *result3 = ft_itoa(number3);
	printf("Testing4: Convert '%d' into '%s'\n", number3, result3);
	free(result3);

	int number4 = INT_MAX;
	char *result4 = ft_itoa(number4);
	printf("Testing5: Convert '%d' into '%s'\n", number4, result4);
	free(result4);

	printf("Testing ft_itoa: DONE\n");
	printf("\n");
}

char function1(unsigned int x, char y) {
    return (y);
}

char function2(unsigned int x, char y) {
    return (y);
}

char function3(unsigned int x, char y) {
    return (y);
}

void	test_strmapi()
{
	printf("Testing ft_strmapi:\n");

	char *res1 = ft_strmapi("Hello World!", function1);
	printf("Testing1: %s\n", res1);
	free(res1);

	char *res2 = ft_strmapi("", function2);
	printf("Testing2: %s\n", res2);
	free(res2);
	
	char *res3 = ft_strmapi(NULL, function3);
	printf("Testing3: %s\n", res3);
	free(res3);

	printf("Testing ft_strmapi: DONE\n");
	printf("\n");
}

void	striteri_func(unsigned int x, char *y){
	*y = *y + x;
}

void	test_striteri()
{
	printf("Testing ft_striteri:\n");

	char s1[] = "Hello";
	ft_striteri(s1, striteri_func);
	printf("Testing1: %s\n", s1);

	char s2[] = "";
	ft_striteri(s2, striteri_func);
	printf("Testing2: %s\n", s2);

	char *s3 = NULL;
	ft_striteri(s3, striteri_func);
	printf("Testing3: %s\n", s3);

	printf("Testing ft_striteri: DONE\n");
	printf("\n");
}

int	main()
{
	test_isalpha();
	test_strlen();
	test_strlcpy();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();
	test_strmapi();
	test_striteri();
	return (0);
}
