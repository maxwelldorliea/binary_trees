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

	curr = *tree;
	if (!curr)
	{
		tmp = binary_tree_node(curr, value);
		if (!tmp)
			return (NULL);
		return (*tree = tmp);
	}

	if (value < curr->n)
	{
		if (curr->left)
			return (bst_insert(&(curr->left), value));

		tmp = binary_tree_node(curr, value);
		if (!curr)
			return (NULL);
		return (curr->left = tmp);

	}
	else if (value > curr->n)
	{
		if (curr->right)
			return (bst_insert(&(curr->right), value));

		tmp = binary_tree_node(curr, value);
		if (!curr)
			return (NULL);
		return (curr->right = tmp);
	}
	return (NULL);
}
