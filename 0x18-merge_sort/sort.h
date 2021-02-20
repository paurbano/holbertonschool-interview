#ifndef MERGE_SORT
#define MERGE_SORT

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void print_array(const int *array, size_t size);
void merge(int *array, int *left, int *right, size_t size);
void merge_sort(int *array, size_t size);
#endif
