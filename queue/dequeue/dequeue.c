#include "dequeue.h"

t_dequeue				*init_dequeue(void)
{
	t_dequeue	*dequeue;

	if ((dequeue = (t_dequeue *)malloc(sizeof(t_dequeue))) == 0)
		return (NULL);
	dequeue->head = NULL;
	dequeue->tail = NULL;
	return (dequeue);
}

int						pop_back(t_dequeue *dequeue)
{
	t_node	*node;
	t_node	*tmp;
	int		ret_val;

	if (!dequeue)
		return (0);
	node = dequeue->tail;
	ret_val = node->data;
	if (dequeue_size(dequeue) == 1)
	{
		free(node);
		dequeue->head = NULL;
		dequeue->tail = NULL;
	}
	else
	{
		tmp = node->prev;
		node->prev->next = NULL;
		free(node);
		dequeue->tail = tmp;
	}
	return (ret_val);
}

void					push_back(t_dequeue *dequeue, int item)
{
	t_node	*new_node;

	if (!dequeue)
		return ;
	if ((new_node = (t_node *)malloc(sizeof(t_node))) == 0)
		return ;
	new_node->data = item;
	new_node->prev = dequeue->tail;
	new_node->next = NULL;
	if (is_empty(dequeue))
		dequeue->head = new_node;
	else
		dequeue->tail->next = new_node;
	dequeue->tail = new_node;
}

int						pop_front(t_dequeue *dequeue)
{
	t_node	*node;
	t_node	*tmp;
	int		ret_val;

	if (!dequeue)
		return (0);
	node = dequeue->head;
	ret_val = node->data;
	if (dequeue_size(dequeue) == 1)
	{
		free(node);
		dequeue->head = NULL;
		dequeue->tail = NULL;
	}
	else
	{
		tmp = node->next;
		tmp->prev = NULL;
		free(node);
		dequeue->head = tmp;
	}
	return (ret_val);
}

void					push_front(t_dequeue *dequeue, int item)
{
	t_node	*new_node;

	if (!dequeue)
		return ;
	if ((new_node = (t_node *)malloc(sizeof(t_node))) == 0)
		return ;
	new_node->data = item;
	new_node->prev = NULL;
	new_node->next = dequeue->head;
	if (is_empty(dequeue))
		dequeue->tail = new_node;
	else
		dequeue->head->prev = new_node;
	dequeue->head = new_node;
}

int						is_empty(t_dequeue *dequeue)
{
	return (dequeue->head == NULL);
}

size_t					dequeue_size(t_dequeue *dequeue)
{
	size_t	cnt;
	t_node	*node;

	if (!dequeue)
		return (0);
	if (is_empty(dequeue))
		return (0);
	cnt = 1;
	node = dequeue->head;
	while (node->next)
	{
		node = node->next;
		cnt++;
	}
	return (cnt);
}
	
