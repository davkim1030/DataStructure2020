#include "linked_list.h"

/*
** 번호의 유효성 검사 함수
** @param char *phone	: 유효성을 체크할 번호 문자열
*/

int					check_phone(char *phone)
{
	int i = 0;
	int cnt = 0;
	int flag[3] = { 0, 0, 0 };

	while (phone[i])
	{
		if (phone[i] == '-')
		{
			if (cnt == 0)
			{
				if (flag[cnt] != 3)
					return (0);
			}
			else if (cnt == 1)
			{
				if (flag[cnt] != 3 && flag[cnt] != 4)
					return (0);
			}
			else if (cnt == 2)
			{
				if (flag[cnt] != 4)
					return (0);
			}
		}
		else
			flag[cnt]++;
		i++;
	}
	return (1);
}
