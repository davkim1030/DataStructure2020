#include "linked_list.h"

/*
** 리스트에 새로운 원소를 맨 뒤에 추가
** @param t_list *head	: 리스트의 헤드 노드
** @param t_list *new	: 새로운 노드
*/

void				add_node_back(t_list *head, t_list *new)
{
	t_list	*tmp;
	t_list	*node;

	tmp = head;
	if ((node = malloc(sizeof(t_list))) == 0)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	strcpy(node->name, new->name);
	node->sno = new->sno;
	node->gpa = new->gpa;
	strcpy(node->phone, new->phone);
	strcpy(node->province, new->province);
	node->next = NULL;
	tmp->next = node;
}
