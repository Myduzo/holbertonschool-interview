#include "sort.h"

/**
 * mergeArrays - merge arrays to become one array
 *
 * @array: array pointer
 * @size: size of the array
 * @mid: half the size of the array
 * @update: update pointer
 *
 */
void mergeArrays(int *array, int size, int mid, int *update)
{
	int i = 0, j = mid, x = 0;

	printf("Merging...\n[left]: ");
	print_array(array, mid);
	printf("[right]: ");
	print_array(array + mid, size - mid);
	while (x < size)
	{
		if (i == mid)
		{
			update[x] = array[j];
			j++;
		}
		else if (j == size)
		{
			update[x] = array[i];
			i++;
		}
		else if (array[j] <= array[i])
		{
			update[x] = array[j];
			j++;
		}
		else
		{
			update[x] = array[i];
			i++;
		}
		x++;
	}
	for (i = 0; i < size; i++)
	{
		array[i] = update[i];
	}
	printf("[Done]: ");
	print_array(update, size);
}


/**
 * merge - merge function
 *
 * @array: array pointer
 * @size: size of the array
 * @update: update pointer
 *
 */
void merge(int *array, size_t size, int *update)
{
	int mid = size / 2;

	if (size < 2)
		return;

	merge(array, mid, update);
	merge(array + mid,  size - mid, update);
	mergeArrays(array, size, mid, update);
}


/**
 * merge_sort - Merge Sort algorithm
 *
 * @array: array pointer
 * @size: size of the array
 *
 */
void merge_sort(int *array, size_t size)
{
	int *update;

	if (!array)
		return;

	update = malloc(sizeof(int) * size);
	if (!update)
		return;

	merge(array, size, update);
	free(update);
}
