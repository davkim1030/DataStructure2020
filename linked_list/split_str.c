#include "linked_list.h"

/*
** split_str()을 위해 만든 함수, 띄어쓰기 없는 문자열의 길이를 구한다
** @param const char *str	: 자를 문자열
*/

static int			len_word(const char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0' && !isspace(str[len] < 0 ? 1 : str[len]))
		len++;
	return (len);
}

/*
** split_str()를 위해 만든 함수, 전체 문자열을 몇 개로 나눌지 계산함
** @param const char *str	: 자를 문자열
*/

static int			arr_size(const char *str)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (!isspace(str[i] < 0 ? 1 : str[i]))
		{
			cnt++;
			i += len_word(&str[i]);
		}
		else
			i++;
	}
	return (cnt);
}

/*
** 원본 문자열을 목적 문자열로 일정 길이 만큼 복사하고 원본 문자열의 길이를 리턴
** @param char *dst			: 결과를 넣을 문자열
** @param const char *src	: 복사할 문자열
** @param size_t size		: 복사하려는 문자열의 길이
*/

static size_t		strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen(src));
}

/*
** 입력받은 문자열을 공백문자 단위로 잘라서 나눠서 char **로 만들어서 리턴
** @param const char *str : 자를 문자열
*/

char				**split_str(const char *s)
{
	char	**ret;
	int		ret_i;
	int		str_i;
	int		len;

	ret = (char **)malloc(sizeof(char *) * (arr_size(s) + 1));
	str_i = 0;
	ret_i = 0;
	while (s[str_i])
	{
		if (!isspace(s[str_i] < 0 ? 1 : s[str_i]))
		{
			len = len_word(&s[str_i]);
			ret[ret_i] = malloc(sizeof(char) * (len + 1));
			strlcpy(ret[ret_i], &s[str_i], len + 1);
			str_i += len;
			ret_i++;
		}
		else
			str_i++;
	}
	ret[ret_i] = '\0';
	return (ret);
}
