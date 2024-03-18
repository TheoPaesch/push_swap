NAME	:= push_swap

CFLAGS	:= -Wextra -Wall -Werror

LIBFTA	:= ./lib/libftprintf.a

INCLUDES	:= -I ./include/ -I ./lib/libft/ -I ./lib/libft/gnl/

SRCDIR := ./src/

SRCS	:=  $(SRCDIR)main.c \
			$(SRCDIR)bubble_sort.c \
			$(SRCDIR)create_array.c \
			$(SRCDIR)free_func.c \
			$(SRCDIR)index.c \
			$(SRCDIR)k_sort.c \
			$(SRCDIR)p_actions.c \
			$(SRCDIR)parsing.c \
			$(SRCDIR)r_actions.c \
			$(SRCDIR)rr_actions.c \
			$(SRCDIR)s_actions.c \
			$(SRCDIR)sorting.c

OBJS	:= ${SRCS:.c=.o}

CC		:= cc

all: libft $(NAME)

libft:
	make -C ./lib

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) $(CLFAGS) $(OBJS) $(LIBFTA) -o $(NAME)

clean:
	make -C ./lib clean
	rm -rf $(OBJS)

fclean: clean
	make -C ./lib fclean
	rm -rf $(NAME)

re: clean all

.PHONY: all clean fclean re