#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - check if a node is the root of the tree
 * @node: node to be check
 * Return: 1 if True or 0 if False
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	return (0);
}
