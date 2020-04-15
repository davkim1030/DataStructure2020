#ifndef LINKED_LIST_H
# define LINKED_LIST_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

typedef struct		s_list
{
	char			name[50];		// 학생 이름
	int				sno;			// 학번
	float			gpa;			// 학점
	char			phone[20];		// 전화번호
	char			province[30];	// 출신도시
	struct s_list	*next;			// 링크
}					t_list;

t_list				*init_list(void);
void				add_node_front(t_list *head, t_list *new);
int					list_size(t_list *head);
void				add_node_back(t_list *head, t_list *new);
void				search_insert_position(t_list *head, t_list *new);
int					load_data(t_list *head, char *filename);
void				print_list(t_list *head);
int					get_cmd_type(const char *cmd);
void				search_name(t_list *head, char *name);
void				print_range(t_list *head, char *start, char *end);
void				list_pop(t_list *head);
void				search_phone(t_list *head, char *last4);
void				search_province(t_list *head, char *prov);
char				**split_str(const char *s);
t_list				*strs_to_node(char **strs);
int					str_list_len(char **str_list);
int					check_phone(char *phone);
int					check_cmd_validity(char **cmd_list);
void				select_menu(t_list *head);
#endif
