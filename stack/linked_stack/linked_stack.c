#include "linked_stack.h"

int		pop(t_linked_stack *stack)
{
	t_linked_stack	*node;
	t_linked_stack	*prev;
	int				ret_val;

	if (!stack)
		return (0);
	prev = stack;
	node = stack->next;
	while (node->next)
	{
		prev = node;
		node = node->next;
	}
	ret_val = node->data;
	free(node);
	prev->next = NULL;
	return (ret_val);
}

void	push(t_linked_stack *stack, int item)
{
	t_linked_stack *node;
	t_linked_stack *new;

	node = stack;
	if ((new = (t_linked_stack *)malloc(sizeof(t_linked_stack))) == 0)
		return ;
	new->data = item;
	new->next = NULL;
	while (node->next)
		node = node->next;
	node->next = new;
}

int		peek(t_linked_stack *stack)
{
	t_linked_stack *node;

	node = stack;
	while (node->next)
		node = node->next;
	return (node->data);
}

int		is_empty(t_linked_stack *stack)
{
	if (stack == NULL)
		return (1);
	return (stack->next == NULL);
}
