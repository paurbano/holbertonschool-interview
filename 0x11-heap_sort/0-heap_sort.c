#include "sort.h"
/**
* heap_sort - sorts an array of integers using the Heap sort
* @array: array of integers to sort
* @size: size of array
* return - None
*/
void heap_sort(int *array, size_t size)
{
	int end;

	heapify(array, size);
	end = (int)size - 1;

	while (end > 0)
	{
		swap(&array[end], &array[0]);
		/*printf("imprime array funcion heap_sort\n");*/
		print_array(array, size);
		end = end - 1;
		siftdown(array, 0, end, size);
	}
}
/**
* heapify - order heap
* @array: array of integers to sort
* @size: size of array
* return - None
*/
void heapify(int *array, size_t size)
{
	int start;

	start = ((int)size - 2) / 2;
	while (start >= 0)
	{
		siftdown(array, start, size - 1, size);
		start = start - 1;
	}
}
/**
* siftdown - sift-down heap sort algorithm
* @array: array of integers to sort
* @start: where to start order
* @end: limit how far down the heap to sift
* @size: size of array
* return - None
*/
void siftdown(int *array, int start, int end, size_t size)
{
	int child, root = start;

	while ((root * 2 + 1) <= end)
	{
		child = root * 2 + 1;
		if ((child + 1 <= end) && (array[child] < array[child + 1]))
			child = child + 1;
		if (array[root] < array[child])
		{
			swap(&array[root], &array[child]);
			root = child;
			/*printf("imprime array de tamaño:%lu en funcion siftdown\n", size);*/
			print_array(array, size);
		}
		else
			return;
	}
}

/**
 * swap - check the code for Holberton School students.
 * @a: parameter
 * @b: parameter
 * Return: Always 0.
 */
void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
