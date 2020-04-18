#include "linked_queue.h"

int		pop(t_linked_queue *queue)
{
	t_linked_queue	*node;
	int				ret_val;

	if (!queue || !queue->next)
		return (0);
	node = queue->next;
	ret_val = node->data;
	queue->next = node->next;
	free(node);
	return (ret_val);
}

void	push(t_linked_queue *queue, int item)
{
	t_linked_queue *node;
	t_linked_queue *new;

	if (!queue)
		return ;
	if ((new = (t_linked_queue *)malloc(sizeof(t_linked_queue))) == 0)
		return ;
	node = queue;
	while (node->next)
		node = node->next;
	new->data = item;
	new->next = NULL;
	node->next = new;
}

int		peek(t_linked_queue *queue)
{
	return (queue->next->data);
}

int		is_empty(t_linked_queue *queue)
{
	if (!queue)
		return (1);
	return (!queue->next);
}
