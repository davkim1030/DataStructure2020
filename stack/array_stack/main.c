#include "array_stack.h"

int		main(void)
{
	int stack[STACK_MAX_SIZE];

	for (int i = 0; i < STACK_MAX_SIZE; i++)
		stack[i] = 0;
	printf("Pushing items to stack\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", i + 1);
		push(stack, i + 1);
	}
	printf("\nSeeking and popping from stack\n");
	while (!is_empty(stack))
	{
		printf("%d ", seek(stack));
		pop(stack);
	}
	printf("\n");
	return (0);
}
