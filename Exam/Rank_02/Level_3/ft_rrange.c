/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <stdlib.h>

int	count_len(int start, int end)
{
	if (start <= end)
		return (end - start + 1);
	else
		return (start - end + 1);
}

int	*ft_rrange(int start, int end)
{
	int	x;
	int	len;
	int	*res;

	x = 0;
	len = count_len(start, end) + 1;
	res = (int *)malloc(sizeof(int) * len);
	while (x < len)
	{
		res[x] = end;
		if (start < end)
			end--;
		else
			end++;
		x++;
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
	result = ft_rrange(start, end);
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
	result = ft_rrange(start, end);
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
	result = ft_rrange(start, end);
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
	result = ft_rrange(start, end);
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