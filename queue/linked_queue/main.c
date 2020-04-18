#include "linked_queue.h"

int		main(void)
{
	t_linked_queue *queue;

	queue = (t_linked_queue *)malloc(sizeof(t_linked_queue));
	printf("Pushing items to queue\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", i + 1);
		push(queue, i + 1);
	}
	printf("\nPeeking and popping queue\n");
	while (!is_empty(queue))
	{
		printf("%d ", peek(queue));
		pop(queue);
	}
	printf("\n");
	return (0);
}
