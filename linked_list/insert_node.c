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
