#ifndef CIRCULAR_QUEUE_H
# define CIRCULAR_QUEUE_H
# include <stdio.h>
# include <stdlib.h>
# define QUEUE_MAX 10

static size_t	front = 0;
static size_t	rear = 0;
int				pop(int queue[]);
void			push(int queue[], int item);
int				seek(int queue[]);
int				is_empty(int queue[]);
int				is_full(int queue[]);
#endif
