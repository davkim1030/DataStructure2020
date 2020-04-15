#include "linked_list.h"

/*
** 리스트에 파일에 있는 데이터를 넣음
** 해당 파일명을 못 찾은 경우엔 0 리턴, 잘 찾아서 로드한 경우엔 1 리턴
** @param t_list *head		: 리스트의 헤드 노드
** @param char *filename	: 읽을 파일의 이름
*/

int					load_data(t_list *head, char *filename)
{
	FILE	*fp;
	t_list	*node;

	if (!(fp = fopen(filename, "r")))
		return (0);
	while (!feof(fp))
	{
		node = malloc(sizeof(t_list));
		memset(node, 0, sizeof(t_list));
		fscanf(fp, "%s %d %f %s %s",
			node->name, &node->sno, &node->gpa,
			node->phone, node->province);
		if (strcmp(node->name, "") && node->sno && node->gpa && \
			strcmp(node->phone, "") && strcmp(node->province, ""))
			search_insert_position(head, node);
	}
	return (1);
}
