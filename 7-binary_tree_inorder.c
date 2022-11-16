#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: root of tree to traverse
 * @func: a pointer to a function to be execute during the traversal
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
