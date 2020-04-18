#include "circular_queue.h"

int		main(void)
{
	int queue[QUEUE_MAX];

	for (int i = 0; i < QUEUE_MAX; i++)
		queue[i] = 0;
	rear = 0;
	front = 0;
	for (int j = 0; j < 3; j++)
	{
		printf("Pushing items\n");
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", i + 1);
			push(queue, i + 1);
		}
		printf("\nSeek and pop items untill empty\n");
		while (!is_empty(queue))
		{
			printf("%d ", seek(queue));
			pop(queue);
		}
		printf("\n");
	}
	return (0);
}
