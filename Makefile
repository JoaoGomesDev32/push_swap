NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I include -I libft

LIBFT = libft/libft.a

SRC = main.c \
      src/operations.c \
      src/operations2.c \
      src/operations3.c \
      src/stack_ops.c \
      src/stack_utils.c \
      src/parsing.c \
      src/validation.c \
      src/sort_simple.c \
      src/disorder.c \
      src/sort_medium.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re