#include "binary_trees.h"


/**
 * binary_tree_rotate_right - rotate a binary tree right
 * @tree: root of the tree
 * Return: root of rotated tree or NULL
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tree_left, *tmp;

	if (!tree || !(tree->left))
		return (NULL);
	tree_left = tree->left;
	tmp = tree_left->right;
	tree_left->right = tree;
	tree->left = tmp;

	if (tmp)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = tree_left;
	tree_left->parent = tmp;

	if (tmp)
	{
		if (tmp->left == tree)
			tmp->left = tree_left;
		else
			tmp->right = tree_left;
	}

	return (tree_left);
}
