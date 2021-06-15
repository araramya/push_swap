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
		gcc $(NAME) && ./a.out    15 24 43 45 37 61 40 63 96 54 14 70 1 71 26 7 10 78 53 9 64 65 89 95 85 39 44 90 35 28 25 66 30 29 46 72 87 79 36 18 91 62 49 42 13 92 73 58 52 32 27 68 59 97 57 88 20 86 48 41 33 3 21 16 47 74 80 76 75 55 8 99 11 56 4 83 19 77 81 100 22 17 2 38 34 6 23 12 93 60 82 50 84 94 51 31 69 5 67 98
 

all : ${NAME}

clean : 
		$(MAKE) clean -C ./libft
		${RM} ${OBJS}

fclean : clean
		$(MAKE) fclean -C ./libft
		${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o