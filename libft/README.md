<i style="text-align:justify; display:block;">This project has been created as part of the 42 curriculum by joagomes.</i>

# Libft

This project is part of the 42 curriculum and consists of reimplementing standard C library functions. The goal is to improve knowledge of memory management, pointer usage, string manipulation, and basic data structures while creating a reusable static library for future projects.

## Description

`libft` is a custom library that reimplements C standard library functions and adds useful helper functions. The library can be compiled into `libft.a` and linked with other programs.

## Implemented Functions

### Character checks

- `int ft_isalpha(int c);`
  - Returns `1` if `c` is an alphabetic letter (`A`-`Z` or `a`-`z`), otherwise returns `0`.
- `int ft_isdigit(int c);`
  - Returns `1` if `c` is a digit (`0`-`9`), otherwise returns `0`.
- `int ft_isalnum(int c);`
  - Returns `1` if `c` is alphanumeric (letter or digit), otherwise returns `0`.
- `int ft_isascii(int c);`
  - Returns `1` if `c` is a valid ASCII character (value between 0 and 127), otherwise returns `0`.
- `int ft_isprint(int c);`
  - Returns `1` if `c` is a printable character, including space, otherwise returns `0`.

### Memory functions

- `void *ft_memset(void *s, int c, size_t n);`
  - Fills the first `n` bytes of memory pointed to by `s` with the value `c`.
- `void ft_bzero(void *s, size_t n);`
  - Sets the first `n` bytes of the memory area pointed to by `s` to zero.
- `void *ft_memcpy(void *dest, const void *src, size_t n);`
  - Copies `n` bytes from memory area `src` to `dest`. The memory areas must not overlap.
- `void *ft_memmove(void *dest, const void *src, size_t n);`
  - Copies `n` bytes from `src` to `dest`, handling overlapping memory safely.
- `void *ft_memchr(const void *s, int c, size_t n);`
  - Searches the first `n` bytes of `s` for character `c` and returns a pointer to the match, or `NULL` if not found.
- `int ft_memcmp(const void *s1, const void *s2, size_t n);`
  - Compares the first `n` bytes of `s1` and `s2`. Returns a negative, zero, or positive value depending on the comparison.
- `void *ft_calloc(size_t nmemb, size_t size);`
  - Allocates memory for an array of `nmemb` elements of `size` bytes each and initializes all bytes to zero.

### String functions

- `size_t ft_strlen(const char *s);`
  - Returns the length of the string `s`, excluding the terminating null byte.
- `size_t ft_strlcpy(char *dst, const char *src, size_t size);`
  - Copies up to `size - 1` characters from `src` to `dst`, null-terminating the result if `size` is greater than zero.
- `size_t ft_strlcat(char *dst, const char *src, size_t size);`
  - Appends `src` to the end of `dst` while avoiding buffer overflow and returns the total length it tried to create.
- `char *ft_strchr(const char *s, int c);`
  - Returns a pointer to the first occurrence of `c` in `s`, or `NULL` if not found.
- `char *ft_strrchr(const char *s, int c);`
  - Returns a pointer to the last occurrence of `c` in `s`, or `NULL` if not found.
- `int ft_strncmp(const char *s1, const char *s2, size_t n);`
  - Compares up to `n` characters of `s1` and `s2` and returns the difference between the first unmatched characters.
- `char *ft_strnstr(const char *big, const char *little, size_t len);`
  - Searches for the first occurrence of `little` in `big`, within the first `len` bytes, and returns a pointer to the match or `NULL`.
- `char *ft_strdup(const char *s);`
  - Allocates new memory and returns a duplicate of the string `s`.
- `char *ft_substr(const char *s, unsigned int start, size_t len);`
  - Allocates and returns a substring from `s`, beginning at index `start` and of maximum length `len`.
- `char *ft_strjoin(char const *s1, char const *s2);`
  - Allocates and returns a new string formed by concatenating `s1` and `s2`.
- `char *ft_strtrim(char const *s1, char const *set);`
  - Allocates and returns a copy of `s1` with characters in `set` removed from the beginning and end.
- `char **ft_split(char const *s, char c);`
  - Splits `s` into an array of strings using `c` as the delimiter and returns the array terminated by `NULL`.
- `char *ft_itoa(int n);`
  - Converts the integer `n` to a newly allocated string.
- `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
  - Applies function `f` to each character of `s` to create a new string.
- `void ft_striteri(char *s, void (*f)(unsigned int, char *));`
  - Applies function `f` to each character of `s`, passing its index and a pointer to the character.

### Conversion

- `int ft_atoi(const char *nptr);`
  - Converts the initial part of `nptr` to an integer, ignoring leading whitespace and handling an optional sign.

### Case conversion

- `int ft_toupper(int c);`
  - Converts a lowercase letter to uppercase. Returns the unchanged character if it is not lowercase.
- `int ft_tolower(int c);`
  - Converts an uppercase letter to lowercase. Returns the unchanged character if it is not uppercase.

### File descriptor output

- `void ft_putchar_fd(char c, int fd);`
  - Writes character `c` to file descriptor `fd`.
- `void ft_putstr_fd(char *s, int fd);`
  - Writes string `s` to file descriptor `fd`.
- `void ft_putendl_fd(char *s, int fd);`
  - Writes string `s` followed by a newline to file descriptor `fd`.
- `void ft_putnbr_fd(int n, int fd);`
  - Writes the integer `n` as a string to file descriptor `fd`.

### Linked list functions

- `t_list *ft_lstnew(void *content);`
  - Allocates a new list node with `content` and sets `next` to `NULL`.
- `void ft_lstadd_front(t_list **lst, t_list *new);`
  - Adds the node `new` at the beginning of the list `lst`.
- `void ft_lstadd_back(t_list **lst, t_list *new);`
  - Adds the node `new` at the end of the list `lst`.
- `int ft_lstsize(t_list *lst);`
  - Returns the number of nodes in the list `lst`.
- `t_list *ft_lstlast(t_list *lst);`
  - Returns the last node of the list `lst`.
- `void ft_lstdelone(t_list *lst, void (*del)(void*));`
  - Deletes a single node using function `del` on its content and frees the node.
- `void ft_lstclear(t_list **lst, void (*del)(void*));`
  - Deletes and frees all nodes of the list, setting `*lst` to `NULL`.
- `void ft_lstiter(t_list *lst, void (*f)(void *));`
  - Iterates through the list and applies function `f` to the content of each node.
- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
  - Creates a new list by applying function `f` to each node's content and freeing on error with `del`.

## Instructions

### Compilation

To build the library, run:

```bash
make
```

Available commands:

```bash
make        # Build the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Rebuild everything
```

### Usage

Include the header and link with `libft.a`:

```c
#include "libft.h"

int main(void)
{
    return 0;
}
```

Compile your program with:

```bash
gcc -Wall -Wextra -Werror main.c libft.a
```

## Resources

### References on C and Data Structures
- **GeeksforGeeks** - Comprehensive tutorials on C, data structures, and algorithms
- **C String Handling** - Standard C library documentation (man pages)

### Peer Discussions

Peer discussions with fellow 42 students helped with debugging edge cases, sharing implementation strategies, and ensuring code quality through collaborative reviews.

### AI Usage

AI was used to clarify C programming concepts (memory management, pointers, string manipulation) and assist with README structure and function documentation.

## Project structure

- `*.c`          - implementation files
- `libft.h`      - library header
- `Makefile`     - build rules
- `README.md`    - project documentation

## Notes

This repository follows the 42 `libft` project requirements and is intended for educational use.
