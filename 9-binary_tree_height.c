#include "binary_trees.h"


/**
 * binary_tree_height_dfs - return the height of a tree
 * @tree: root of the tree whose height is to be return
 * Return: height of the tree
 */

size_t binary_tree_height_dfs(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height_dfs(tree->left);
	right = binary_tree_height_dfs(tree->right);
	return ((left > right) ? left + 1 : right + 1);
}

/**
 * binary_tree_height - return the height of a tree
 * @tree: root of the tree whose height is to be return
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height_dfs(tree) - 1);
}

