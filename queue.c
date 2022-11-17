#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * push - add a new node to the queue
 * @head: the first node of the queue
 * @tail: the last node of the queue
 * @node: value of the node to be added
 * Return: the new node or NULL
 */

queue *push(queue **head, queue **tail, binary_tree_t *node)
{
	queue *q_node;

	q_node = malloc(sizeof(*q_node));
	if (!q_node)
	{
		free(q_node);
		q_node = NULL;
		return (q_node);
	}

	q_node->val = node;
	q_node->next = NULL;
	if (!(*head))
		*tail = *head = q_node;
	else
	{
		if (!(*tail))
			return (NULL);
		(*tail)->next = q_node;
		*tail = q_node;
	}

	return (q_node);
}


/**
 * pop - get the first node of the queue
 * @head: the first node of the queue
 * @tail: the last node of the queue
 * Return: the first node or NULL
 */
queue *pop(queue **head, queue **tail)
{
	queue *tmp;

	if (!(*head))
		return (NULL);
	tmp = *head;
	*head = tmp->next;
	if (!(*head))
		*tail = *head;

	return (tmp);
}

/**
 * pop_del - delete the first node of the queue
 * @head: the first node of the queue
 * @tail: the last node of the queue
 * Return: Nothing
 */
void pop_del(queue **head, queue **tail)
{
	queue *next;

	if (!(*head))
		return;
	next = (*head)->next;
	free((*head));
	*head = NULL;
	*head = next;
	if (!(*head))
		*tail = NULL;
}

/**
 * free_queue - delete the all nodes of the queue
 * @head: the first node of the queue
 * @tail: the last node of the queue
 * Return: Nothing
 */
void free_queue(queue **head, queue **tail)
{
	queue *h;

	if (!head)
		return;

	h = *head;

	while (h)
	{
		queue *tmp = h->next;

		if (h->val)
			free(h->val);
		if (h)
			free(h);
		h = tmp;
	}

	*head = NULL;
	*tail = NULL;
}

/**
 * print_queue - prints all nodes of the queue
 * @head: the first node of the queue
 * Return: Nothing
 */

void print_queue(queue *head)
{
	while (head)
	{
		printf("%d -> ", head->val->n);
		head = head->next;
	}
	printf("\n");
}
