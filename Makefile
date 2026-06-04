NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = src/main.c \
      src/operations.c \
      src/operations2.c \
      src/operations3.c \
      src/stack_ops.c \
      src/stack_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re