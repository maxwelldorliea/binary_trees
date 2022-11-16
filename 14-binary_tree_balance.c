#include "binary_trees.h"

/**
 * binary_tree_balance - return the balance factor of a tree
 * @tree: root of the tree
 * Return: balance factor of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	const binary_tree_t *save_tree = tree;

	if (!tree)
		return (0);

	while (tree && tree->left)
	{
		tree = tree->left;
		left++;
	}

	tree = save_tree;
	while (tree && tree->right)
	{
		tree = tree->right;
		right++;
	}

	return (left - right);
}

