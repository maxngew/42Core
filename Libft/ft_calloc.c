/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:40:12 by jngew             #+#    #+#             */
/*   Updated: 2024/05/20 12:58:09 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			x;
	size_t			total_size;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	x = 0;
	while (x < total_size)
	{
		ptr[x] = 0;
		x++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int main() {
  // Test case 1: Allocate memory for 5 integers and initialize to zero
  int *arr1 = (int*)ft_calloc(5, sizeof(int));

  if (arr1) {
    printf("Test 1: Allocated %zu integers\n", (size_t)5);
    printf("arr1[0] = %d\n", arr1[0]);  // Access first element directly
    printf("arr1[4] = %d\n", arr1[4]);  // Access last element directly
    free(arr1);  // Free the allocated memory
  } else {
    printf("Test 1: Allocation failed\n");
  }

  // Test case 2: Allocate memory for 0 elements (should return NULL)
  char *arr2 = (char*)ft_calloc(0, sizeof(char));

  if (arr2) {
    printf("Test 2: Unexpected allocation (should be NULL)\n");
  } else {
    printf("Test 2: Allocation failed (expected)\n");
  }

  // Test case 3: Allocate a large amount of memory (check for overflow handling)
  size_t large_size = sizeof(size_t) * 1000000;  // Adjust the size as needed
  void *arr3 = ft_calloc(large_size, 1);

  if (arr3) {
    printf("Test 3: Unexpected allocation for large size 
	(may indicate overflow issue)\n");
    free(arr3);  // Free the allocated memory (if successful)
  } else {
    printf("Test 3: Allocation failed (expected for large size)\n");
  }

  return 0;
}
*/
