#include "linked_list.h"

/*
** 리스트의 맨 앞에(head 노드 다음에) 새로운 노드를 추가
** @param t_list *head	: 리스트의 헤드 노드
** @param t_list *new	: 새로운 노드
*/

void				add_node_front(t_list *head, t_list *new)
{
	t_list *node;

	if (!head || !new)
		return ;
	if ((node = malloc(sizeof(t_list))) == 0)
		return ;
	strcpy(node->name, new->name);
	node->sno = new->sno;
	node->gpa = new->gpa;
	strcpy(node->phone, new->phone);
	strcpy(node->province, new->province);
	node->next = head->next;
	head->next = node;
}
