#include "array_stack.h"

int			pop(int stack[])
{
	int ret_val;

	if (is_empty(stack))
		return (0);
	ret_val = stack[top];
	top--;
	return (ret_val);
}

void		push(int stack[], int item)
{
	if (top == STACK_MAX_SIZE)
		return ;
	top++;
	stack[top] = item;
}

int			seek(int stack[])
{
	if (is_empty(stack))
		return (0);
	return (stack[top]);
}

int			is_empty(int stack[])
{
	return (top == -1);
}
