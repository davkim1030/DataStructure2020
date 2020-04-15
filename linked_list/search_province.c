#include "linked_list.h"

/*
** 입력 받은 지역명으로 리스트에서 노드 검색하여 모두 출력
** @param t_list *head	: 데이터를 추가할 리스트의 헤드 노드
** @param char *prov	: 검색할 지역명
*/

void				search_province(t_list *head, char *prov)
{
	t_list	*node;
	int		cnt;

	node = head;
	cnt = 0;
	while (node)
	{
		if (strcmp(node->province, prov) == 0)
		{
			printf("%s\t%d\t%.1f\t%s\t%s\n",
				node->name, node->sno, node->gpa, node->phone, node->province);
			cnt++;
		}
		node = node->next;
	}
	printf("총 %d명\n\n", cnt);
}
