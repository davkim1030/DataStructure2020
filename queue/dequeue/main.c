#include "dequeue.h"

int		main(void)
{
	t_dequeue	*dequeue;

	if ((dequeue = init_dequeue()) == 0)
		return (0);
	printf("Pushing items to front of dequeue\n");
	for (int i = 1; i < 6; i++)
	{
		printf("%d ", i);
		push_front(dequeue, i);
	}
	printf("\nPushing items to back of dequeue\n");
	for (int i = 6; i < 11; i++)
	{
		printf("%d ", i);
		push_back(dequeue, i);
	}
	printf("\nPopping items to front of dequeue\n");

	t_node	*node;
	node = dequeue->head;
	while (!is_empty(dequeue))
//	for (int i = 0; i < 10; i++)
	{
//		printf("%d ", node->data);
//		node = node->next;
		printf("%d ", pop_front(dequeue));
	}

	printf("\n");
	return (0);
}
