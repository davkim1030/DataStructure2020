#include "linked_list.h"

/*
** 리스트의 모든 내용을 출력하는 함수
** @param t_list *head	: 출력할 리스트의 헤드 노드
*/

void				print_list(t_list *head)
{
	t_list *node;

	node = head->next;
	while (node)
	{
		printf("%s\t", node->name);
		printf("%d\t", node->sno);
		printf("%.1f\t", node->gpa);
		printf("%s\t", node->phone);
		printf("%s\n", node->province);
		node = node->next;
	}
}
