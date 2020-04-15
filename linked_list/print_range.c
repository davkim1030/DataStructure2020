#include "linked_list.h"

/*
** 입력 받은 두 이름과 이름 사이에 있는 리스트의 모든 노드의 이름 출력
** @param t_list *head	: 데이터를 검색할 리스트의 헤드 노드
** @param char *start	: 검색할 데이터의 시작 이름
** @param char *end		: 검색할 데이터의 마지막 이름
*/

void				print_range(t_list *head, char *start, char *end)
{
	t_list	*node;
	int		start_i;
	int		end_i;

	start_i = 0;
	end_i = 0;
	node = head;
	while (node)
	{
		if (strcmp(start, node->name) == 0)
			break ;
		start_i++;
		node = node->next;
	}
	if (!node)
	{
		printf("%s라는 이름을 찾을 수 없습니다.\n\n", start);
		return ;
	}
	node = head;
	while (node)
	{
		if (strcmp(end, node->name) == 0)
			break ;
		end_i++;
		node = node->next;
	}
	if (!node)
	{
		printf("%s라는 이름을 찾을 수 없습니다.\n\n", end);
		return;
	}	if (start_i > end_i)
	{
		for (int i = end_i; i <= start_i; i++)
		{
			printf("%s\t%d\t%.1f\t%s\t%s\n",
				node->name, node->sno, node->gpa, node->phone, node->province);
			node = node->next;
		}
	}
	else
	{
		node = head;
		for (int i = 0; i < start_i; i++)
			node = node->next;
		for (int i = start_i; i <= end_i; i++)
		{
			printf("%s\t%d\t%.1f\t%s\t%s\n",
				node->name, node->sno, node->gpa, node->phone, node->province);
			node = node->next;
		}
	}
	printf("\n");
}
