#include "binary_trees.h"


/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: root of the tree
 * @level: the level of the tree
 * @depth: the depth
 * Return: 1 or 0 on failure
 */

int is_complete(const binary_tree_t *tree, int level, int depth)
{
	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (level + 1 >= depth);
	return (is_complete(tree->left, level + 1, depth) &&
			is_complete(tree->right, level + 1, depth));
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root of the tree
 * Return: 1 or 0 on failure
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int depth = 0, level = 0;
	const binary_tree_t *saved_tree = tree;

	if (!tree)
		return (0);
	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	depth--;

	tree = saved_tree;
	return (is_complete(tree, level, depth));
}
