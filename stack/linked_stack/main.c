#include "linked_stack.h"

int	main(void)
{
	t_linked_stack *stack;

	stack = (t_linked_stack *)malloc(sizeof(t_linked_stack));
	
	printf("Pushing items to stack\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", i + 1);
		push(stack, i + 1);
	}
	printf("\nSeeking and popping items from stack\n");
	while (!is_empty(stack))
	{
		printf("%d ", peek(stack));
		pop(stack);
	}
	printf("\n");
	return (0);
}
