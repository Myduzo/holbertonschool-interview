#include "sort.h"
/**
 * CountSort - function that sorts the array.
 *
 * @array: main array pointer
 * @size: size of array
 * @pas: pas
 * @array2: 2nd array pointer
 *
 * Return: 0
 */
int CountSort(int *array, ssize_t size, int pas, int *array2)
{
	ssize_t i;
	int count[10] = {0};

	for (i = 0; i < size; i++)
		++count[(array[i] / pas) % 10];
	for (i = 1; i < size; i++)
		count[i] += count[i - 1];
	for (i = size - 1; i >= 0; i--)
		array2[--count[(array[i] / pas) % 10]] = array[i];
	for (i = 0; i < size; i++)
		array[i] = array2[i];
	return (0);
}

/**
 * radix_sort - function that sorts the array using radix sort algorithm.
 *
 * @array: main array pointer
 * @size: size of array
 *
 */
void radix_sort(int *array, size_t size)
{
	size_t i = 0;
	int *array2, max, pas;

	if (!array)
		return;

	array2 = malloc(sizeof array * size);
	if (!array2)
		return;

	while (i < size)
	{
		if (array[i] > max)
			max = array[i];
		i++;
	}

	for (pas = 1; max / pas > 0; pas *= 10)
	{
		CountSort(array, size, pas, array2);
		print_array(array, size);
	}
	free(array2);
}
