#include "linked_list.h"

/*
** 입력값 유효성 체크 함수
** @param char **cmd_list	: 명령어 리스트
*/

int					check_cmd_validity(char **cmd_list)
{
	int i;
	int flag;

	if (strcmp(cmd_list[0], "IS") == 0)
	{
		// 인자 개수가 다르면 종료
		if (str_list_len(cmd_list) != 6)
			return (0);
		// 학번이 숫자가 아니면 종료
		i = 0;
		while (cmd_list[2][i])
		{
			if (!isdigit(cmd_list[2][i]))
				break ;
			i++;
		}
		if (strlen(cmd_list[2]) != i)
			return (0);
		// 학점이 소숫점 숫자가 아님면 종료
		i = 0;
		flag = 0;
		while (cmd_list[3][i])
		{
			if (cmd_list[3][i] == '.')
				flag++;
			else if (!isdigit(cmd_list[3][i]))
				break ;
			i++;
		}
		if (strlen(cmd_list[3]) != i && flag != 1)
			return (0);
		// 전화번호 포맷이 안 맞으면 종료
		if (check_phone(cmd_list[4]))
			return (0);
	}
	else if (strcmp(cmd_list[0], "SE") == 0)
	{
		// 인자 개수가 다르면 종료
		if (str_list_len(cmd_list) != 2)
			return (0);
	}
	else if (strcmp(cmd_list[0], "RG") == 0)
	{
		// 인자 개수가 다르면 종료
		if (str_list_len(cmd_list) != 3)
			return (0);
	}
	else if (strcmp(cmd_list[0], "DL") == 0)
	{
		// 인자 개수가 다르면 종료
		if (str_list_len(cmd_list) != 1)
			return (0);
	}
	else if (strcmp(cmd_list[0], "SP") == 0)
	{
		// 인자 개수가 다르면 종료
		if (str_list_len(cmd_list) != 2)
			return (0);
	}
	else if (strcmp(cmd_list[0], "LO") == 0)
	{
		// 인자 개수가 다르면 종료
		if (str_list_len(cmd_list) != 2)
			return (0);
	}
	else if (strcmp(cmd_list[0], "EX") == 0)
	{
		// 인자 개수가 다르면 종료
		if (str_list_len(cmd_list) != 1)
			return (0);
	}
	else
		return (0);
	return (1);
}
