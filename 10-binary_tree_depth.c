#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_depth_recurse - modifies the dept through a recursive call
 * @tree: node of the tree whose depth is to be modifies
 * @depth: depth to be modifies
 * Return: Nothing
 */

void binary_tree_depth_recurse(const binary_tree_t *tree, size_t *depth)
{
	if (!tree)
		return;
	*depth += 1;

	binary_tree_depth_recurse(tree->parent, depth);
}

/**
 * binary_tree_depth - return the depth of a node
 * @tree: node of the tree whose height is to be return
 * Return: depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	binary_tree_depth_recurse(tree, &depth);
	return (depth - 1);
}

