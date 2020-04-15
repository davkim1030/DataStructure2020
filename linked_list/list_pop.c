#include "linked_list.h"

/*
** 마지막 원소를 출력하고 삭제
** @param t_list *head	: 데이터를 삭제할 리스트의 헤드 노드
*/

void				list_pop(t_list *head)
{
	t_list	*node;
	t_list	*prev;

	if (!head)
	{
		printf("리스트가 비어있습니다.\n");
		return ;
	}
	if (!head->next)
	{
		free(head);
		return ;
	}
	prev = head;
	node = head->next;
	while (node->next)
	{
		prev = node;
		node = node->next;
	}
	printf("%s\t%d\t%.1f\t%s\t%s\n\n",
		node->name, node->sno, node->gpa, node->phone, node->province);
	free(node);
	prev->next = NULL;
}
