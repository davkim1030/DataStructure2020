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
