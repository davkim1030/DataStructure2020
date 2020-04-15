#include "linked_list.h"

/*
** 입력받은 명령줄을 나눠서 첫 번째 문자열을 읽고 그에 따른 정수형 코드를 리턴
** @param char *cmd	: 입력받은 명령줄 
** @return:
**			0		- EX; 프로그램 종료
**			1		- IS; 새로운 노드 입력
**			2		- SE; 이름으로 노드 검색
**			3		- RG; 이름과 이름 사이에 있는 모든 이름 출력
**			4		- DL; 마지막 원소를 출력하고 삭제
**			5		- SP; 전화번호 마지막 4자리로 노드 검색
**			6		- LO; 지역으로 노드 검색
**			else	- 위에 명시된 명령어 이외의 잘못된 입력
*/

int					get_cmd_type(const char *cmd)
{
	int		len;
	int		i;

	len = 0;
	i = -1;
	while (!isspace(cmd[len]) && cmd[len])
		len++;
	// 명령어의 길이가 2가 아니면 잘못 된 명령으로 인식하고 에러코드(7) 리턴
	if (len != 2)
		return (7);
	if (!strncmp(cmd, "EX", 2))
		return (0);
	else if (!strncmp(cmd, "IS", 2))
		return (1);
	else if (!strncmp(cmd, "SE", 2))
		return (2);
	else if (!strncmp(cmd, "RG", 2))
		return (3);
	else if (!strncmp(cmd, "DL", 2))
		return (4);
	else if (!strncmp(cmd, "SP", 2))
		return (5);
	else if (!strncmp(cmd, "LO", 2))
		return (6);
	return (7);
}
