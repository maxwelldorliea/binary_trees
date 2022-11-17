#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_complete - check is a binary tree is complete
 * @tree: root of the tree
 * Return: 1 if true or 0 if false
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *arr[1024];
	int i = 0, j = 0, k = 0, end = 0;

	if (!tree)
		return (0);
	while (k < 1024)
		arr[k++] = NULL;

	arr[i] = (binary_tree_t *)tree;

	while (arr[i])
	{
		binary_tree_t *node = arr[i++];

		j++;
		if (!node)
			continue;
		if (node->left)
		{
			if (end)
				return (0);
			arr[j++] = node->left;
		}
		else
			end = 1;
		if (node->right)
		{
			if (end)
				return (0);
			arr[j] = node->right;
		}
		else
			end = 1;
	}

	return (1);
}
