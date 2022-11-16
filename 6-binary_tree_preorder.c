#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: root of tree to traverse
 * @func: a pointer to a function to be execute during the traversal
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
