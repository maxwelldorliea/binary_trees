#include "binary_trees.h"

/**
 * binary_tree_balance - return the balance factor of a tree
 * @tree: root of the tree
 * Return: balance factor of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height_dfs(tree->left);
	right = binary_tree_height_dfs(tree->right);

	return (left - right);
}

