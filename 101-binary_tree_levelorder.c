#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - traverse the tree using BF Traversal technique
 * @tree: root of the tree
 * @func: function to be call during each iteration
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *arr[1024];
	int i = 0, j = 0, k = 0;

	if (!tree || !func)
		return;
	while (k < 1024)
		arr[k++] = NULL;

	arr[i] = (binary_tree_t *)tree;

	while (arr[i])
	{
		binary_tree_t *node = arr[i++];
		int val;

		j++;
		if (!node)
			continue;
		val = node->n;
		func(val);
		if (node->left)
			arr[j++] = node->left;
		if (node->right)
			arr[j] = node->right;
	}
}
