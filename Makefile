NAME = pushswap.a
LIBFT = ./libft/libft.a
SRCS = $(shell find "./sources" -name '*.c') push_swap.c
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar csr

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
		$(MAKE) -C ./libft
		cp $(LIBFT) ${NAME}
		${AR} ${NAME} ${OBJS}
		gcc $(NAME) && ./a.out 24 56 7936 -7  59 150 796

all : ${NAME}

clean : 
		$(MAKE) clean -C ./libft
		${RM} ${OBJS}

fclean : clean
		$(MAKE) fclean -C ./libft
		${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o
