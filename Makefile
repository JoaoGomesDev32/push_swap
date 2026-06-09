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
      src/stack_moves.c \
      src/parsing.c \
      src/validation.c \
      src/sort_simple.c \
      src/index.c \
      src/sort_complex.c

OBJ = $(SRC:.c=.o)

TEST_NAME = tests/test_push_swap
TEST_SRC = tests/test_push_swap.c \
		   src/operations.c \
		   src/operations2.c \
		   src/operations3.c \
		   src/stack_ops.c \
		   src/stack_utils.c \
		   src/parsing.c \
		   src/validation.c \
		   src/sort_simple.c \
		   src/index.c \
		   src/sort_complex.c

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

test: $(NAME) $(LIBFT)
	$(CC) $(CFLAGS) $(TEST_SRC) $(LIBFT) -o $(TEST_NAME)
	./tests/run_tests.sh; status=$$?; rm -f $(TEST_NAME); exit $$status

.PHONY: all clean fclean re test
