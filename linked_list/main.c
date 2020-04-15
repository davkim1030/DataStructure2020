/*
** linked list를 활용하고 테스트 해보는 프로그램
*/

#include "linked_list.h"

int					main(int c, char *v[])
{
	t_list	*list;

	if (c > 1)
	{

		list = init_list();
		if (load_data(list, v[1]) == 0)
		{
			printf("해당 파일이 없습니다.\n");
			return (0);
		}
		print_list(list);
		select_menu(list);
	}
	return (0);
}
