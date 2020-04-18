#include "linear_queue.h"

int		pop(int queue[])
{
	queue[front] = 0;
	front++;
}

void	push(int queue[], int item)
{
	queue[rear] = item;
	rear++;
}

int		seek(int queue[])
{
	return (queue[front]);
}

int		is_empty(int queue[])
{
	return (front == rear);
}
