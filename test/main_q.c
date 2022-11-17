#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	binary_tree_t *n1, *n2, *n3, *n4, *n5;
	queue *head = NULL, *tail = NULL, *tmp;

	n1 = binary_tree_node(NULL, 5);
	n2 = binary_tree_node(NULL, 7);
	n3 = binary_tree_node(NULL, 9);
	n4 = binary_tree_node(NULL, 19);
	n5 = binary_tree_node(NULL, 29);

	push(&head, &tail, n1);
	push(&head, &tail, n2);
	push(&head, &tail, n3);
	push(&head, &tail, n4);
	print_queue(head);
	tmp = pop(&head, &tail);
	printf("%d\n", tmp->val->n);
	pop_del(&tmp, &tail);
	print_queue(head);
	push(&head, &tail, n5);
	print_queue(head);
	tmp = pop(&head, &tail);
	printf("%d\n", tmp->val->n);
	pop_del(&tmp, &tail);
	print_queue(head);
	tmp = pop(&head, &tail);
	printf("%d\n", tmp->val->n);
	pop_del(&tmp, &tail);
	print_queue(head);
	tmp = pop(&head, &tail);
	printf("%d\n", tmp->val->n);
	pop_del(&tmp, &tail);
	print_queue(head);
	tmp = pop(&head, &tail);
	printf("%d\n", tmp->val->n);
	pop_del(&tmp, &tail);
	print_queue(head);
	free_queue(&head, &tail);

	return (0);
}
