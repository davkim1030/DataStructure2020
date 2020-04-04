#include <stdio.h>

int		cnt[3];		// 원판 카운틀를 위한 배열

/*
** 주어진 값들로 파일에 로그를 기록하는 함수
*/

void	append_file(int disk, int from, int to)
{
	FILE *fp;

	fp = fopen("hanoi_result.txt", "at");
	if (fp == NULL)
		printf("Error, file open error\n");
	else
		fprintf(fp, "Disk %d is moved from pole %d to pole %d\n", disk ,from, to);
	fclose(fp);
}

/*
** 원판을 src에서 dest로 이동하는 함수
*/

void	move_disk(int src, int dest, int st[][100])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (st[src - 1][i] != 0)
		i++;
	while (st[dest - 1][j] != 0)
		j++;
	if (i != 0)
	{
		st[dest - 1][j] = st[src - 1][i - 1];	// src의 최상위 원판을 dest 최상위로 복사
		st[src - 1][i - 1] = 0;					// src의 최상위 원판을 초기화(0)
		cnt[dest - 1]++;
		cnt[src - 1]--;
		append_file(st[dest - 1][j], src, dest);
		printf("Disk %d is moved from pole %d to pole %d\n", st[dest - 1][j], src, dest);
	}
}

void	Hanoi(int n, int source, int desti, int mid, int st[][100])
{
	if (n == 1)
		move_disk(source, desti, st);
	else
	{
		Hanoi(n - 1, source, mid, desti, st);
		move_disk(source, desti, st);
		Hanoi(n - 1, mid, desti, source, st);
	}
}

int		main(void)
{
	int st[3][100];
	int n;

	scanf("%d", &n);
	// 초기화 파트
	// cnt 배열 초기화
	cnt[0] = n;
	cnt[1] = 0;
	cnt[2] = 0;
	// 스택 배열 초기화
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 3; j++)
			st[j][i] = 0;
	// 원판 초기화
	for (int i = 0; i < n; i++)
		st[0][i] = n - i;
	// 메인 로직 실행
	Hanoi(n, 1, 3, 2, st);
	return (0);
}
