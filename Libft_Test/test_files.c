#include "libft.h"

void	test_isalpha()
{
	printf("Testing ft_alpha:\n");
	printf("Testing1 'A': %d\n", ft_isalpha(65));
	printf("Testing2 'a': %d\n", ft_isalpha(97));
	printf("Testing3 '0': %d\n", ft_isalpha(48));
	printf("Testing4 '!': %d\n", ft_isalpha(33));
	printf("Testing5 ' ': %d\n", ft_isalpha(32));
	printf("Testing6 Non-ASCII (200): %d\n", ft_isalpha(200));
	printf("Testing ft_alpha: DONE\n");
	printf("\n");
}

void	test_isdigit()
{
	printf("Testing ft_isdigit:\n");

	printf("Testing1 (48) is: %d\n", ft_isdigit(48));
	printf("Testing2 (57) is: %d\n", ft_isdigit(57));
	printf("Testing3 (58) is: %d\n", ft_isdigit(58));
	printf("Testing4 (32) is: %d\n", ft_isdigit(32));
	printf("Testing5 (33) is: %d\n", ft_isdigit(33));

	printf("Testing ft_isdigit: DONE\n");
	printf("\n");
}

void	test_isalnum()
{
	printf("Testing ft_isalnum:\n");

	printf("Testing1 (48) is: %d\n", ft_isalnum(48));
	printf("Testing2 (65) is: %d\n", ft_isalnum(65));
	printf("Testing3 (97) is: %d\n", ft_isalnum(97));
	printf("Testing4 (32) is: %d\n", ft_isalnum(32));
	printf("Testing5 (33) is: %d\n", ft_isalnum(33));
	printf("Testing6 (200) is: %d\n", ft_isalnum(200));
	printf("Testing7 (0) is: %d\n", ft_isalnum(0));

	printf("Testing ft_isalnum: DONE\n");
	printf("\n");
}

void	test_isascii()
{
	printf("Testing ft_isascii:\n");

	printf("Testing1 (0) is: %d\n", ft_isascii(0));
	printf("Testing2 (32) is: %d\n", ft_isascii(32));
	printf("Testing3 (48) is: %d\n", ft_isascii(48));
	printf("Testing4 (127) is: %d\n", ft_isascii(127));
	printf("Testing5 (200) is: %d\n", ft_isascii(200));

	printf("Testing ft_isascii: DONE\n");
	printf("\n");
}

void	test_isprint()
{
	printf("Testing ft_isprint:\n");

	printf("Testing1 (32) is: %d\n", ft_isprint(32));
	printf("Testing2 (48) is: %d\n", ft_isalnum(48));
	printf("Testing3 (97) is: %d\n", ft_isalnum(97));
	printf("Testing4 (127) is: %d\n", ft_isalnum(127));
	printf("Testing5 (0) is: %d\n", ft_isalnum(0));

	printf("Testing ft_isprint: DONE\n");
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

void	test_memset()
{
	printf("Testing ft_memset:\n");

	char str1[50] = "Hello & Welcome World!";
	printf("Testing1, before memset: %s\n", str1);

	ft_memset(str1 + 6, '.', 9);
	printf("Testing1, after memset: %s\n", str1);

	char str2[50] = "Hello & Welcome World!";
	printf("Testing2, before memset: %s\n", str2);

	ft_memset(str2, 0, 9);
	printf("Testing2, after memset: %s\n", str2);

	char str3[50] = "Hello & Welcome World!";
	printf("Testing3, before memset: %s\n", str3);

	ft_memset(str3, 'A', 23);
	printf("Testing3, after memset: %s\n", str3);

	char str4[50] = "Hello & Welcome World!";
	printf("Testing4, before memset: %s\n", str4);

	ft_memset(str4 + 5, 'Z', 20);
	printf("Testing4, after memset: %s\n", str4);

	printf("Testing ft_memset: DONE\n");
	printf("\n");
}

void	test_bzero()
{
	printf("Testing ft_bzero:\n");

	char str1[50] = "Hello World!";
	printf("Testing1 before bzero: %s\n", str1);

	ft_bzero(str1 + 5, 5);
	printf("Testing1 after bzero: %s\n", str1);

	char str2[50] = "Hello World!";
	printf("Testing2, before bzero: %s\n", str2);

	ft_bzero(str2, 0);
	printf("Testing2, after bzero: %s\n", str2);

	char str3[50] = "Hello World!";
	printf("Testing3 before bzero: %s\n", str3);

	ft_bzero(str3, 5);
	printf("Testing3 after bzero: %s\n", str3);

	printf("Testing ft_bzero: DONE\n");
	printf("\n");
}

void	test_memcpy()
{
	printf("Testing ft_memcpy:\n");

	char dest1[20] = "Hello World!";
	char src1[10] = "12345";
	printf("Testing1, before memcpy: dest = %s, src = %s\n", dest1, src1);

	ft_memcpy(dest1, src1,  5);
	printf("Testing1, after memcpy: dest = %s\n", dest1);

	char dest2[20] = "Hello World!";
	char src2[10] = "12345";
	printf("Testing2, before memcpy: dest = %s, src = %s\n", dest2, src2);

	ft_memcpy(dest2, src2,  0);
	printf("Testing2, after memcpy: dest = %s\n", dest2);

	char dest3[20] = "Hello World!";
	char src3[10] = "";
	printf("Testing3, before memcpy: dest = %s\n", dest3);

	ft_memcpy(dest3, src3,  5);
	printf("Testing3, after memcpy: dest = %s\n", dest3);

	char dest4[20] = "Hello World!";
	printf("Testing4, before memcpy: dest %s\n", dest4);

	ft_memcpy(dest4 + 5, dest4,  5);
	printf("Testing4, after memcpy: dest = %s\n", dest4);

	printf("Testing ft_memcpy: DONE\n");
	printf("\n");
}

void	test_memmove()
{
	printf("Testing ft_memmove:\n");

	char dest1[20] = "Hello World!";
	char src1[10] = "12345";
	printf("Testing1, before memmove: dest = %s, src = %s\n", dest1, src1);

	ft_memmove(dest1, src1,  5);
	printf("Testing1, after memmove: dest = %s\n", dest1);

	char dest2[20] = "Hello World!";
	char src2[10] = "12345";
	printf("Testing2, before memmove: dest = %s, src = %s\n", dest2, src2);

	ft_memmove(dest2, src2,  0);
	printf("Testing2, after memmove: dest = %s\n", dest2);

	char dest3[20] = "Hello World!";
	char src3[10] = "";
	printf("Testing3, before memmove: dest = %s\n", dest3);

	ft_memmove(dest3, src3,  5);
	printf("Testing3, after memmove: dest = %s\n", dest3);

	char dest4[20] = "Hello World!";
	char src4[20] = "abcde";
	printf("Testing4, before memmove: dest = %s, src = %s\n", dest4, src4);

	ft_memmove(dest4 + 5, src4,  5);
	printf("Testing4, after memmove: dest = %s\n", dest4);

	printf("Testing ft_memmove: DONE\n");
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

void	test_strlcat()
{
	printf("Testing ft_strlcat:\n");

	char dest[20] = "Hello ";
	char src[] = "World!";
	size_t destsize = sizeof(dest);
	size_t result = ft_strlcat(dest, src, destsize);
	printf("Test: Expected output: %s\n", dest);
	printf("Test: Expected output length: %zu\n", result);

	printf("Testing ft_strlcat: DONE\n");
	printf("\n");
}

void	test_toupper()
{	
	printf("Testing ft_toupper:\n");

	char lowercase = 'a';
	printf("Lowercase: %c\n", lowercase);
	printf("Uppercase: %c\n", ft_toupper(lowercase));
	
	printf("Testing ft_toupper: DONE\n");
	printf("\n");
}

void	test_tolower()
{
	printf("Testing ft_tolower:\n");

	char uppercase = 'A';
	printf("Lowercase: %c\n", uppercase);
	printf("Uppercase: %c\n", ft_tolower(uppercase));

	printf("Testing ft_tolower: Done\n");
	printf("\n");
}

void	test_strchr()
{
	printf("Testing ft_strchr:\n");

	const char str[] = "Hello! World!";
	const char c = ' ';
	char *ret;

	ret = ft_strchr(str, c);
	printf("String after %c is - %s\n", c, ret);

	printf("Testing ft_strchr: DONE\n");
	printf("\n");
}

void	test_strrchr()
{
	printf("Testing ft_strrchr:\n");

	const char str[] = "Hello! World!";
	const char c = 'o';
	char *ret;

	ret = ft_strrchr(str, c);
	printf("String from last %c is: %s\n", c, ret);

	printf("Testing ft_strrchr: DONE\n");
	printf("\n");
}

void	test_strncmp()
{
	printf("Testing ft_strncmp:\n");

	printf("%d\n", ft_strncmp("Hello", "Hello", 7));
	printf("%d\n", ft_strncmp("Hello", "He110", 3));
	printf("%d\n", ft_strncmp("Hello", "World", 5));

	printf("Testing ft_strncmp: DONE\n");
	printf("\n");
}

void	test_memchr()
{
	printf("Testing ft_memchr:\n");

	const char str[] = "Hello World!";
	const char c = 'o';
	char *results;

	results = ft_memchr(str, c, 15);
	printf("String after %c is %s\n", c, results);

	results = ft_memchr(str, c, 3);
	printf("String after %c is %s\n", c, results);

	printf("Testing ft_memchr: DONE\n");
	printf("\n");
}

void	test_memcmp()
{
	printf("Testing ft_memcmp:\n");

	printf("The difference is: %d\n", ft_memcmp("Hello", "Hello", 7));
	printf("The difference is: %d\n", ft_memcmp("Hello", "He110", 5));
	printf("The difference is: %d\n", ft_memcmp("Hello", "World", 3));

	printf("Testing ft_memcmp: DONE\n");
	printf("\n");
}

void	test_strnstr()
{
	printf("Testing ft_strnstr:\n");

	const char *hay = "Hello World!";
	const char *nee = "World";
	const char *nee1 = "!";
	size_t n = 13;
	size_t n1 = 5;

	char *res = ft_strnstr(hay, nee, n);
	char *res1 = ft_strnstr(hay, nee1, n);
	char *res2 = ft_strnstr(hay, nee1, n1);
	if (res)
		printf("Found: %s\n", res);
	else
		printf("Not found within the first %zu characters. \n", n);
	if (res1)
		printf("Found: %s\n", res1);
	else
		printf("Not found within the first %zu characters. \n", n);
	if (res2)
		printf("Found: %s\n", res2);
	else
		printf("Not found within the first %zu characters. \n", n1);

	printf("Testing ft_strnstr: DONE\n");
	printf("\n");
}

void	test_atoi()
{
	printf("Testing ft_atoi:\n");
	const char *test_cases[] =
	{
		"123",
        "+456",
        "-789",
        "   101",
        "  +202",
        "  -303",
        "  404  ",
        "  +505abc",
        "  -606abc",
        "  707def",
		NULL
	};

	int x = 0;
	while (test_cases[x] != NULL)
	{
		printf("Input: %s\n", test_cases[x]);
		int	results = ft_atoi(test_cases[x]);
		printf("Output: %d\n\n", results);
		x++;
	}
	printf("Testing ft_atoi: DONE\n");
	printf("\n");
}

void	test_calloc()
{
	printf("Testing ft_calloc:\n");

	int *arr1 = (int*)ft_calloc(5, sizeof(int));

	if (arr1) {
		printf("Testing1: Allocated %zu integers\n", (size_t)5);
		printf("Testing1: arr1[0] = %d\n", arr1[0]);
		printf("Testing1: arr1[4] = %d\n", arr1[4]);
		free(arr1);
	} 
	else 
	{
		printf("Testing1: Allocation failed\n");
	}

	char *arr2 = (char*)ft_calloc(0, sizeof(char));

	if (arr2)
	{
		printf("Testing2: Unexpected allocation (should be NULL)\n");
	}
	else
	{
		printf("Testing2: Allocation failed (expected)\n");
	}

	size_t large_size = sizeof(size_t) * 1000000;
	void *arr3 = ft_calloc(large_size, 1);

	if (arr3)
	{
		printf("Testing3: Unexpected allocation for large size (may indicate overflow issue)\n");
		free(arr3);
	}
	else
	{
		printf("Testing3: Allocation failed (expected for large size)\n");
	}

	printf("Testing ft_calloc: DONE\n");
	printf("\n");
}

void	test_strdup()
{
	printf("Testing ft_strdup:\n");

	char *result;

	result = ft_strdup("Hello, World!");
	printf("Testing1: %s\n", result);
	free(result);

	result = ft_strdup("");
	printf("Testing2: %s\n", result);
	free(result);

	result = ft_strdup("A");
	printf("Testing3: %s\n", result);
	free(result);

	result = ft_strdup(" !@#@$%*");
	printf("Testing4: %s\n", result);
	free(result);

	printf("Testing ft_strdup: DONE\n");
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
		printf("%s\n", result[x]);
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
	printf("\n");

	result = ft_split("", ',');
	printf("Testing3: ' ', ' '\n");
	if (result[0] == NULL)
		printf("Empty String\n");
	free (result);
	printf("\n");

	result = ft_split("a,b,c,d,e", ',');
	printf("Testing4: 'a,b,c,d,e' & ','\n");
	for (int x = 0; result[x] != NULL; x++)
    {
        printf("%s\n", result[x]);
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

	char *res4 = ft_strmapi("hello", ft_toupper);
	printf("Testing4: %s\n", res4);
	free(res4);

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

void	test_putcharfd()
{
	printf("Testing ft_putchar_fd:\n");

	char c = 'a';
	int fd = 1;
	printf("Testing1: c =  %c, fd = %d\n", c, fd);
	ft_putchar_fd(c, fd);
	printf("\n");

	printf("Testing ft_putchar_fd: DONE\n");
	printf("\n");
}

void	test_putstrfd()
{
	printf("Testing ft_putstr_fd:\n");

	char *s = "Hello";
	int	fd = 1;

	printf("Testing1: s = %s, fd = %d\n", s, fd);
	ft_putstr_fd(s, fd);
	printf("\n");

	printf("Testing ft_putstr_fd: DONE\n");
	printf("\n");
}

void	test_putendlfd()
{
	printf("Testing ft_putendl_fd:\n");

	char *s = "";
	int	fd = 1;

	printf("Testing1: s = %s, fd = %d\n", s, fd);
	ft_putendl_fd(s, fd);
	printf("\n");

	printf("Testing ft_putendl_fd: DONE\n");
	printf("\n");
}

void	test_putnbrfd()
{
	printf("Testing ft_putnbr_fd:\n");

	int n1 = 0;
	int fd1 = 1;
	
	printf("Testing1: n = %d, fd = %d\n", n1, fd1);
	ft_putnbr_fd(n1, fd1);
	printf("\n");

	int n2 = 1234;
	int fd2 = 1;

	printf("Testing2: n = %d, fd = %d\n", n2, fd2);
	ft_putnbr_fd(n2, fd2);
	printf("\n");

	int n3 = -567;
	int fd3 = 1;

	printf("Testing3: n = %d, fd = %d\n", n3, fd3);
	ft_putnbr_fd(n3, fd3);
	printf("\n");

	printf("Testing ft_putnbr_fd: DONE\n");
	printf("\n");
}

int	main()
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();
	test_strmapi();
	test_striteri();
	test_putcharfd();
	test_putstrfd();
	test_putendlfd();
	test_putnbrfd();
	return (0);
}
