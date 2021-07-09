#ifndef __RADIX_SORT__
#define __RADIX_SORT__

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void print_array(const int *array, size_t size);
void radix_sort(int *array, size_t size);
int CountSort(int *array, ssize_t size, int pas, int *array2);

#endif
