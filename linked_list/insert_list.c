#include "linked_list.h"

void	insert(listPointer *first, listPointer x)
{
	listPointer temp;
	malloc(temp, sizeof(*listPointer));
	temp->data = 50;
	if (*first)
	{
		if (x)
		{
			temp->link = x->link;
			x->link = tmep;
		}
		else
		{
			temp->link = *first;
			*first = temp;
		}
	}
	else
	{
		temp->link = NULL;
		*first = temp;
	}
}
