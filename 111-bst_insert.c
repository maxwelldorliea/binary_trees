#include "binary_trees.h"

/**
 * bst_insert - insert a node into a binary search tree
 * @tree: root of the tree
 * @value: value of the node to be inserted
 * Return: the inserted node or NULL
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr, *tmp;

	if (!tree)
		return (NULL);

	if (!(*tree))
	{
		curr = binary_tree_node(NULL, value);
		if (!curr)
			return (NULL);
		return (curr);
	}

	curr = *tree;

	if (value < curr->n)
	{
		if (curr->left)
			return (bst_insert(&(curr->left), value));
		else
		{
			tmp = binary_tree_node(curr, value);
			if (!curr)
				return (NULL);
			curr->left = tmp;
		}
	}
	else if (value > curr->n)
	{
		if (curr->right)
			return (bst_insert(&(curr->right), value));
		else
		{
			tmp = binary_tree_node(curr, value);
			if (!curr)
				return (NULL);
			curr->right = tmp;
		}
	}
	return (NULL);
}
