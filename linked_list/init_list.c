#include "linked_list.h"

/*
** 리스트를 초기화하여 리턴
*/

t_list				*init_list(void)
{
	t_list	*head;

	head = malloc(sizeof(t_list *));
	strcpy(head->name, "");
	head->sno = 0;
	head->gpa = 0.0;
	strcpy(head->phone, "");
	strcpy(head->province, "");
	head->next = NULL;
	return (head);
}
