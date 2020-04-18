#include "circular_queue.h"

int		pop(int queue[])
{
	int val;
	if (is_empty(queue))
		return (0);
	val = queue[front];
	front = (front + 1) % QUEUE_MAX;
	return (val);
}

void	push(int queue[], int item)
{
	if (is_full(queue))
		return ;
	queue[rear] = item;
	rear = (rear + 1) % QUEUE_MAX;
}

int		seek(int queue[])
{
	return (queue[front]);
}

int		is_empty(int queue[])
{
	return (front == rear);
}

int		is_full(int queue[])
{
	if (front <= rear)
		return (front == 0 && rear == QUEUE_MAX);
	return (front == rear + 1);
}
