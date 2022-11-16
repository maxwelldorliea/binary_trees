#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_delete - delete a tree
 * @tree: root of the tree to be deleted
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	tree = NULL;
}
