#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	sort(int list[], int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (list[i] > list[j])
				swap(&list[i], &list[j]);
			j++;
		}
		i++;
	}
}

int		compare(int a, int b)
{
	if (a < b)
		return -1;
	if (a == b)
		return 0;
	return 1;
}

int		binsearch(int list[], int searchnum, int left, int right)
{
	int middle;

	while (left <= right)
	{
		middle = (left + right) / 2;
		switch (compare(list[middle], searchnum))
		{
			case -1:
				left = middle + 1;
				break ;
			case 0:
				return middle;
			case 1:
				right = middle - 1;
		}
	}
	return -1;
}

int		main(int c, char *v[])
{
	int list[SIZE];
	int result;

	for (int i = 0; i < SIZE; i++)
	{
		list[i] = rand() % RANGE;
		printf("%d ", list[i]);
	}
	printf("\n");
	sort(list, SIZE);
	if (c > 1)
	{
		if ((result = binsearch(list, atoi(v[1]), 0, SIZE - 1)) == -1)
			printf("no %s found.\n", v[1]);
		else
			printf("%s is at index %d of the list\n", v[1], result);
		return 0;
	}
}
