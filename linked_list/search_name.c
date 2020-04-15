#include "linked_list.h"

/*
** 입력 받은 이름의 노드를 검색하여 그 결과를 출력
** @param t_list *head	: 데이터를 검색할 리스트의 헤드 노드
** @param char *name	: 검색할 이름
*/

void				search_name(t_list *head, char *name)
{
	t_list	*node;

	node = head->next;
	while (node && strcmp(node->name, name) != 0)
		node = node->next;
	if (node)
		printf("%s\t%d\t%.1f\t%s\t%s\n\n",
			node->name, node->sno, node->gpa, node->phone, node->province);
	else
		printf("해당 이름의 데이터가 없습니다.\n");
}
