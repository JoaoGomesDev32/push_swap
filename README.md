*This project has been created as part of the 42 curriculum by joagomes and fminks-g.*

## Description

Push Swap is a C program that sorts a list of integers using two stacks and a limited set of operations. The program receives numbers through command-line arguments and prints the sequence of operations required to sort stack `a` in ascending order.

The project demonstrates linked list manipulation, stack operations, input validation, and adaptive strategy selection.

## Instructions

### Compilation

```bash
make
```

### Usage

Execute `./push_swap` with one or more integer arguments, or provide a quoted string containing space-separated integers. Invalid input or duplicate numbers cause the program to print `Error` to `stderr` and return `1`.

### Return Value

- Returns `0` when the input is valid and the sorting operations are produced successfully.
- Returns `1` when the input is invalid.

## Algorithm

The implementation parses the input into a linked list for stack `a`, validates each number, and assigns indexes for normalized sorting.

Based on the input size and disorder, the program selects one of several strategies:

- simple sorting for very small inputs
- medium-cost sorting for moderate inputs
- complex sorting for larger inputs

Operations manipulate stacks `a` and `b` using the allowed instructions and aim to minimize the total number of moves.

## Resources

- `man malloc` / `man free` — memory management
- `man 3 atoi` — numeric conversion
- `man 2 write` — output to `stderr`
- [42 Docs](https://harm-smits.github.io/42docs)

### AI Usage

AI tools were used only as learning support during the development of this project.

They helped explain concepts such as:

- linked lists
- stack operations
- input validation
- algorithm selection

All code was written, tested, and understood by me.
