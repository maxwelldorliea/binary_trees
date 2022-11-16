#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: root node of the node to be inserted
 * @value: value of the node to be inserted
 * Return: the new node on success or null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	node->right = NULL;
	node->left = parent->left;
	if (node->left)
		node->left->parent = node;
	parent->left = node;

	return (node);
}
