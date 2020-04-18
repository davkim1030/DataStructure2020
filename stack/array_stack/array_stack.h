#ifndef ARRAY_STACK_H
# define ARRAY_STACK_H
# include <stdio.h>
# include <stdlib.h>
# define STACK_MAX_SIZE 10

static int	top = -1;
int			pop(int stack[]);
void		push(int stack[], int item);
int			seek(int stack[]);
int			is_empty(int stack[]);
#endif
