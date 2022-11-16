#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: node to be check
 * Return: 1 if True or 0 if False
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
