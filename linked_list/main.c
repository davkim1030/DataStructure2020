#include "linked_list.h"

int					main(void)
{
	t_list	*list;

	list = init_list();
	if (load_data(list, "mydata.txt") == 0)
	{
		printf("해당 파일이 없습니다.\n");
		return (0);
	}
	print_list(list);
	select_menu(list);
	return (0);
}
