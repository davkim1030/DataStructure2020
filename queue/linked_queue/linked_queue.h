#ifndef LINKED_QUEUE_H
# define LINKED_QUEUE_H
# include <stdio.h>
# include <stdlib.h>

typedef struct				s_linked_queue
{
	int						data;
	struct s_linked_queue	*next;
}						 	t_linked_queue;

void						push(t_linked_queue *queue, int data);
int							pop(t_linked_queue *queue);
int							peek(t_linked_queue *queue);
int							is_empty(t_linked_queue *queue);
#endif
