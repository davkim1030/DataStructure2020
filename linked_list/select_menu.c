#include "linked_list.h"

/*
** 옵션을 표준입력으로 받아서 해당 옵션에 해당되는 동작 메뉴 실행
** @param t_list *head : 명령을 처리할 리스트의 헤드 노드
*/

void				select_menu(t_list *head)
{
	char	cmd[4096];
	char	**cmd_list;
	int		type;
	t_list	*node;

	while (1)
	{
		printf("Type command> ");
		gets(cmd);					// 띄어쓰기 포함해서 읽기 위해 사용
		type = get_cmd_type(cmd);
		cmd_list = split_str(cmd);
		if (check_cmd_validity(cmd_list) == 0)
			type = 7;
		if (type == 1)				// IS; insert
		{
			node = strs_to_node(cmd_list);
			search_insert_position(head, node);
		}
		else if (type == 2)			// SE; search node by name
			search_name(head, cmd_list[1]);
		else if (type == 3)			// RG; print range
			print_range(head, cmd_list[1], cmd_list[2]);
		else if (type == 4)			// DL; print last element and delete it
			list_pop(head);
		else if (type == 5)			// SP; search node by phone number
			search_phone(head, cmd_list[1]);
		else if (type == 6)			// LO; search node by province
			search_province(head, cmd_list[1]);
		else if (type == 7)
		{
			printf("Wrong input try again\n");
			printf("IS {name} {sno} {gpa} {phone number} {province}\n - insert new node\n\n");
			printf("SE {name}\n- search node by name\n\n");
			printf("RG {start_name} {end_name}\n- print all names between two names\n\n");
			printf("DL\n- print last element and delete it\n\n");
			printf("SP {four_digit_number}\n- search node by phone number's last 4 digits\n\n");
			printf("LO {province}\n- search all nodes by province name\n\n");
			printf("EX\n- exits program\n\n");
		}
		else
		{
			printf("프로그램을 종료합니다!\n");
			break ;
		}
		free(cmd_list);
	}
}
