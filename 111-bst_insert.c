#include "binary_trees.h"

/**
 * bst_insert - insert a node into a binary search tree
 * @tree: root of the tree
 * @value: value of the node to be inserted
 * Return: the inserted node or NULL
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr;

	if (!tree)
		return (NULL);

	if (!(*tree))
		return (binary_tree_node(NULL, value));

	curr = *tree;

	if (curr->left && curr->left->n < curr->n)
		curr->left = bst_insert(&(curr->left), value);
	else if (curr->right && curr->right->n > curr->n)
		curr->right = bst_insert(&(curr->right), value);
	return (*tree);
}
