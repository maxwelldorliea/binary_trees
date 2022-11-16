#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_size_recurse - modifies the size through a recursive call
 * @tree: root of the tree whose size is to be modifies
 * @size: size to be modifies
 * Return: Nothing
 */

void binary_tree_size_recurse(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;
	*size += 1;

	binary_tree_size_recurse(tree->left, size);
	binary_tree_size_recurse(tree->right, size);
}

/**
 * binary_tree_size - return the size of a tree
 * @tree: root of the tree whose size is to be return
 * Return: size of a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_size_recurse(tree, &size);
	return (size);
}

