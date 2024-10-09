/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <stdlib.h>

int	count_len(int start, int end)
{
	if (start <= end)
		return (end - start + 1);
	else
		return (start - end + 1);
}

int	*ft_range(int start, int end)
{
	int	x;
	int	len;
	int	*res;

	x = 0;
	len = count_len(start, end) + 1;
	res = (int *)malloc(sizeof(int) * len);
	while (x < len)
	{
		if (start < end)
		{
			res[x] = start;
			start++;
			x++;
		}
		else
		{
			res[x] = start;
			start--;
			x++;
		}
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	int	start = 5;
	int	end = 10;
	int	*result;
	int	len;
	int	i;

	// Test 1: range from 5 to 10
	len = count_len(start, end);
	result = ft_range(start, end);
	if (result)
	{
		printf("Range from %d to %d: ", start, end);
		i = 0;
		while (i < len)
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}

	// Test 2: range from 10 to 5
	start = 10;
	end = 5;
	len = count_len(start, end);
	result = ft_range(start, end);
	if (result)
	{
		printf("Range from %d to %d: ", start, end);
		i = 0;
		while (i < len)
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}

	// Test 3: range from -3 to 3
	start = -3;
	end = 3;
	len = count_len(start, end);
	result = ft_range(start, end);
	if (result)
	{
		printf("Range from %d to %d: ", start, end);
		i = 0;
		while (i < len)
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}

	// Test 4: range from 0 to 0
	start = 0;
	end = 0;
	len = count_len(start, end);
	result = ft_range(start, end);
	if (result)
	{
		printf("Range from %d to %d: ", start, end);
		i = 0;
		while (i < len)
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}

	return (0);
}