#ifndef LINKED_STACK_H
# define LINKED_STACK_H
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

typedef struct				s_linked_stack
{
	int						data;
	struct s_linked_stack	*next;
}							t_linked_stack;

int					pop(t_linked_stack *stack);
void				push(t_linked_stack *stack ,int item);
int					peek(t_linked_stack *stack);
int					is_empty(t_linked_stack *stack);
#endif
