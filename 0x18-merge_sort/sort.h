#ifndef _MERGE_SORT_
#define _MERGE_SORT_

#include <stdlib.h>
#include <stdio.h>

void merge_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void merge(int *array, size_t size, int *update);
void mergeArrays(int *array, int size, int mid, int *update);

#endif
