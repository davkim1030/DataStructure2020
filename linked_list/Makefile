CC = gcc

NAME = linked_list

SRCFILE = ./

SRCS = $(SRCFILE)*.c

OBJS = ./*.o

INCS = ./

all:
		$(CC) $(SRCS) -I $(INCS)

$(NAME): all

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
