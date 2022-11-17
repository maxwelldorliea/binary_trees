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
	binary_tree_t *first_parent, *second_parent;

	if (!first || !second)
		return (NULL);

	first_parent = first->parent;
	second_parent = second->parent;

	if (first_parent == second)
		return ((binary_tree_t *)second);
	if (second_parent == first)
		return ((binary_tree_t *)first);

	while (first_parent && second_parent && first_parent != second_parent)
	{
		if (first_parent->left == second_parent ||
				first_parent->right == second_parent)
			return (first_parent);

		else if (second_parent->left == first_parent ||
				second_parent->right == first_parent)
			return (second_parent);

		first_parent = first_parent->parent;
		second_parent = second_parent->parent;
	}

	if (!second_parent || !first_parent)
		return (NULL);

	return (first_parent);
}
