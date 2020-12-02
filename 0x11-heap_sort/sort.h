#ifndef HEAPSORT
#define HEAPSORT

#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size);
void siftdown(int *array, int start, int end, size_t size);
/*void siftdown(int *array, int nodeValue, int root, int last);*/
void swap(int *a, int *b);

#endif
