/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

char	*ft_strrev(char *str)
{
	int		x;
	int		length;
	char	temp;

	x = -1;
	length = 0;
	while (str[length])
		length++;
	while (++x < length / 2)
	{
		temp = str[x];
		str[x] = str[length - 1 - x];
		str[length - 1 - x] = temp;
	}
	return (str);
}