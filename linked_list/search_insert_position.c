#include "linked_list.h"

/*
** 새로운 노드를 리스트에 정렬되게 넣음
** @param t_list *head	: 리스트의 헤드 노드
** @param t_list *new	: 새로운 노드
*/

void				search_insert_position(t_list *head, t_list *new)
{
	t_list *node;
	t_list *tmp;

	node = head;
	tmp = malloc(sizeof(t_list));
	if (!node->next)
		add_node_front(head, new);
	else
	{
		while (node->next != NULL &&
			strcmp(node->next->name, new->name) < 0)
			node = node->next;
		strcpy(tmp->name, new->name);
		tmp->sno = new->sno;
		tmp->gpa = new->gpa;
		strcpy(tmp->phone, new->phone);
		strcpy(tmp->province, new->province);
		tmp->next = node->next;
		node->next = tmp;
	}
}
