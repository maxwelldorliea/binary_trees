#include "binary_trees.h"

/**
 * bst_search - search for a value in a binary search tree
 * @tree: root of tree to be search
 * @value: value to search for
 * Return: pointer to the node containing the value or NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	while (tree)
	{
		if (tree->n == value)
			return ((binary_tree_t *)tree);
		else if (value > tree->n)
			tree = tree->right;
		else if (value < tree->n)
			tree = tree->left;
	}

	return (NULL);
}
