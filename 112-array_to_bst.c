#include "binary_trees.h"
#include <stddef.h>

/**
 * array_to_bst - convert an array to a binary search tree
 * @array: array to be converted
 * @size: length of the size
 * Return: the root of binary search tree or NULL
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *tree = NULL;

	if (!array)
		return (NULL);

	while (i < size)
	{
		bst_insert(&tree, array[i]);
		i++;
	}

	return (tree);
}
