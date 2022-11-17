#include "binary_trees.h"


/**
 * binary_tree_rotate_left - rotate a binary tree left
 * @tree: root of the tree
 * Return: root of rotated tree or NULL
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tree_right, *tmp;

	if (!tree || !(tree->right))
		return (NULL);
	tree_right = tree->right;
	tmp = tree_right->left;
	tree_right->left = tree;
	tree->right = tmp;

	if (tmp)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = tree_right;
	tree_right->parent = tmp;

	if (tmp)
	{
		if (tmp->left == tree)
			tmp->left = tree_right;
		else
			tmp->right = tree_right;
	}

	return (tree_right);
}
