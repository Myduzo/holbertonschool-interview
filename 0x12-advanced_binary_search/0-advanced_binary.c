#include "search_algos.h"
/**
 * recursive_binary - Recursive function
 *
 * @array: pointer to the first element of the array
 * @left: the left part of the array
 * @right: the right part of the array
 * @value: the value to search for
 *
 * Return: value if value in array else -1
 */

int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t i, mid = (left + right) / 2;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		if (i == left)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}

	printf("\n");

	if (array[mid] >= value)
		right = mid;

	if (array[mid] < value)
		left = mid + 1;

	if (left < right)
		return (recursive_binary(array, left, right, value));

	if (array[left] == value)
		return (value);

	else
	{
		printf("Searching in array: %d\n", array[left]);
		return (-1);
	}
}

/**
 * advanced_binary - function that searches for a value
 *
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (!array || size == 0)
		return (-1);
	
	if (size == 1)
	{
		if (*array == value)
			return (value);
		return (-1);
	}

	return (recursive_binary(array, left, right, value));
}
