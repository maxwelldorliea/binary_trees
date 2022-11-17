#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: the ancestor found or NULL
 */


binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (!first || !second)
		return (NULL);

	tmp = (binary_tree_t *)second;

	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = tmp;
		first = first->parent;
	}

	return (NULL);
}
