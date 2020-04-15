#include "linked_list.h"

/*
** 문자열 리스트를 노드로 변환
** @param char **strs	: 변환할 명령어 리스트
*/

t_list				*strs_to_node(char **strs)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	strcpy(new->name, strs[1]);
	new->sno = atoi(strs[2]);
	new->gpa = (float)atof(strs[3]);
	strcpy(new->phone, strs[4]);
	strcpy(new->province, strs[5]);
	return (new);
}
