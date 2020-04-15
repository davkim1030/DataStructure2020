#include "linked_list.h"

/*
** 문자열 리스트의 길이를 구하는 함수
** @param char **str_list	: 길이를 구할 문자열 리스트
*/

int					str_list_len(char **str_list)
{
	int		i;

	i = 0;
	while (str_list[i])
	{
		i++;
	}
	return (i);
}
