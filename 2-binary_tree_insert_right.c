#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: root node of the node to be inserted
 * @value: value of the node to be inserted
 * Return: the new node on success or null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(*node));
	if (!node)
	{
		free(node);
		node = NULL;
		return (node);
	}
	node->parent = parent;
	node->n = value;
	node->right = parent->right;
	node->left = NULL;
	if (node->right)
		node->right->parent = node;
	parent->right = node;

	return (node);
}
