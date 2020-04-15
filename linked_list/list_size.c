#include "linked_list.h"

/*
** 리스트의 원소의 개수(사이즈)를 리턴
** @param t_list *head	: 사이즈를 구할 리스트의 헤드 노드
*/

int					list_size(t_list *head)
{
	int		size;
	t_list	*node;

	size = 0;
	node = head->next;
	while (node)
	{
		node = node->next;
		size++;
	}
	return (size);
}
