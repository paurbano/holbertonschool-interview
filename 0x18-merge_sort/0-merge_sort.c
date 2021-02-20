#include "sort.h"
/**
 * merge - merge two arrays
 * @a: final array
 * @n: Number of elements in array
 * @m: number of half elements in array
 * return - nothing
 */
void merge(int *a, int n, int m)
{
	int i, j, k;
	int *x = malloc(n * sizeof(int));

	printf("Merging...\n");
	printf("[left]: ");
	print_array(a, m);
	printf("[right]: ");
	print_array(a + m, n - m);
	for (i = 0, j = m, k = 0; k < n; k++)
	{
		x[k] = j == n      ? a[i++]
				: i == m      ? a[j++]
				: a[j] < a[i] ? a[j++]
				:               a[i++];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = x[i];
	}
	printf("[Done]: ");
	print_array(a, n);
	free(x);
}
/**
 * merge_sort - Order an array of integers
 * @array: The array to be sorted
 * @size: Number of elements in array
 * return - nothing
 */
void merge_sort(int *array, size_t size)
{
	int m;

	if (size < 2)
		return;
	m = size / 2;
	merge_sort(array, m);
	merge_sort(array + m, size - m);
	merge(array, size, m);
}
