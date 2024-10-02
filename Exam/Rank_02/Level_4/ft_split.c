/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	x = 0;
	while (x < n && s2[x])
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x]= '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int		x = 0;
	int		y = 0;
	int		z = 0;
	int		wc = 0;

	while (str[x])
	{
		while (str[x] && (str[x] == 32 || str[x] == 9 || str[x] == '\n'))
			x++;
		if (str[x])
			wc++;
		while (str[x] && (str[x] != 32 && str[x] != 9 && str[x] != '\n'))
			x++;
	}
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	x = 0;
	while (str[x])
	{
		while (str[x] && (str[x] == 32 || str[x] == 9 || str[x] == '\n'))
			x++;
		y = x;
		while (str[x] && (str[x] != 32 && str[x] != 9 && str[x] != '\n'))
			x++;
		if (x > y)
		{
			out[z] = (char *)malloc(sizeof(char) * ((x - y) + 1));
			ft_strncpy(out[z++], &str[y], x - y);
		}
	}
	out[z] = NULL;
	return (out);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "Hello\tWorld\n42 is \tawesome!";
	char **split = ft_split(str);
	int i = 0;

	// Print the result of ft_split
	while (split[i])
	{
		printf("Word %d: %s\n", i + 1, split[i]);
		i++;
	}
	return (0);
}