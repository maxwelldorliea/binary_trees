#include "binary_trees.h"
#include <limits.h>

/**
 * is_valid_bst - recursively check if all subtree is a valid bst
 * @root: root of the tree
 * @minVal: minimum value
 * @maxVal: maximum value
 * Return: 1 if true or 0 if false
 */

int is_valid_bst(const binary_tree_t *root, long minVal, long maxVal)
{
	if (!root)
		return (1);
	if (root->n >= maxVal || root->n <= minVal)
		return (0);
	return (is_valid_bst(root->left, minVal, root->n) &&
			is_valid_bst(root->right, root->n, maxVal));
}

/**
 * binary_tree_is_bst - check if it is valid bst
 * @tree: root of the tree
 * Return: 1 if true or 0 if false
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (is_valid_bst(tree, LONG_MIN, LONG_MAX));
}
