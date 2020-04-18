#include "linear_queue.h"

int		main(void)
{
	int queue[QUEUE_MAX];

	for (int i = 0; i < QUEUE_MAX; i++)
		queue[i] = 0;
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
	return (0);
}
