#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - traverse the tree using BF Traversal technique
 * @tree: root of the tree
 * @func: function to be call during each iteration
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue *h = NULL, *t = NULL;

	if (!tree || !func)
		return;

	push(&h, &t, (binary_tree_t *)tree);

	while (h != NULL)
	{
		queue *node;
		int val;

		node = pop(&h, &t);
		if (!node)
			continue;
		val = node->val->n;
		func(val);
		if (node->val->left)
			push(&h, &t, node->val->left);
		if (node->val->right)
			push(&h, &t, node->val->right);
		pop_del(&node, &t);
	}
}
