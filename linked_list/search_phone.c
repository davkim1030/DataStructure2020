#include "linked_list.h"

/*
** 입력 받은 4자리 문자열로 노드 검색하여 출력
** @param t_list *head	: 데이터를 검색할 리스트의 헤드 노드
** @param char *last4	: 검색하는 전화번호의 마지막 4자리
*/

void				search_phone(t_list *head, char *last4)
{
	t_list	*node;
	char	*str;
	int		i;
	int		len;

	node = head;
	while (node)
	{
		len = strlen(node->phone);
		i = len - 4;
		str = malloc(5);
		strcpy(str, node->phone + i);
		if (strcmp(str, last4) == 0)
			printf("%s\t%d\t%.1f\t%s\t%s\n\n",
				node->name, node->sno, node->gpa, node->phone, node->province);
		node = node->next;
	}
}
