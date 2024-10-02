CC = gcc
CFLAGS = -Wall -Wextra -pedantic
AR = ar
ARFLAGS = rcs
TARGET = my_program

# Object files
OBJ = main.o variadic_functions.o math_operations.o

# Build the target
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Create static library
libmath.a: math_operations.o
	$(AR) $(ARFLAGS) libmath.a math_operations.o

# Clean up
clean:
	rm -f $(OBJ) $(TARGET) libmath.a
