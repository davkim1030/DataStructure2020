#ifndef DEQUEUE_H
# define DEQUEUE_H
# include <stdio.h>
# include <stdlib.h>

typedef struct		s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct		s_dequeue
{
	t_node			*head;
	t_node			*tail;
}					t_dequeue;

t_dequeue				*init_dequeue();
int						pop_back(t_dequeue *dequeue);
void					push_back(t_dequeue *dequeue, int item);
int						pop_front(t_dequeue *dequeue);
void					push_front(t_dequeue *dequeue, int item);
int						is_empty(t_dequeue *dequeue);
int						is_full(t_dequeue *dequeue);
size_t					dequeue_size(t_dequeue *dequeue);
#endif
