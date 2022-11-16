#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_nodes_recurse - modifies the size through a recursive call
 * @tree: root of the tree whose size is to be modifies
 * @size: size to be modifies
 * Return: Nothing
 */

void binary_tree_nodes_recurse(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;

	if (tree->left || tree->right)
		*size += 1;
	binary_tree_nodes_recurse(tree->left, size);
	binary_tree_nodes_recurse(tree->right, size);
}

/**
 * binary_tree_nodes - return number of node with at least one child in a tree
 * @tree: root of the tree
 * Return: number of nodes with at least one child in a tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_nodes_recurse(tree, &size);
	return (size);
}

