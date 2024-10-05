CC = gcc
CFLAGS = -Wall -Wextra -I../include

# Compile test files
test_printf: test_printf.c
	$(CC) $(CFLAGS) -o test_printf test_printf.c ../src/printf.c ../src/utils.c

test_shell: test_shell.c
	$(CC) $(CFLAGS) -o test_shell test_shell.c ../src/shell.c ../src/utils.c

clean:
	rm -f test_printf test_shell
