#include "binary_trees.h"

/**
 * array_to_heap - To build Max Binary Heap tree
 *
 * @array: ptr to first element of array
 * @size: nbr of element in array
 * Return: ptr to root node of AVL tree
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tr;
	size_t ix;

	tr = NULL;

	for (ix = 0; ix < size; ix++)
	{
		heap_insert(&tr, array[x]);
	}

	return (tr);
}
