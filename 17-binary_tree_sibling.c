#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: node whose sibling is to be found
 * Return: the sibling found or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	const binary_tree_t *sibling_parent;

	if (!node)
		return (NULL);

	sibling_parent = node->parent;

	if (!sibling_parent)
		return (NULL);

	if (sibling_parent->left == node)
		return (sibling_parent->right);
	return (sibling_parent->left);
}
