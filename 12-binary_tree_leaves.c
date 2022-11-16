#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_leave_recurse - modifies the size through a recursive call
 * @tree: root of the tree whose size is to be modifies
 * @size: size to be modifies
 * Return: Nothing
 */

void binary_tree_leave_recurse(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;

	if (!(tree->left) && !(tree->right))
		*size += 1;
	binary_tree_leave_recurse(tree->left, size);
	binary_tree_leave_recurse(tree->right, size);
}

/**
 * binary_tree_leaves - return number of leave in a tree
 * @tree: root of the tree whose number of leave is to be return
 * Return: number of leave in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_leave_recurse(tree, &size);
	return (size);
}

