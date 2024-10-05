# Design Considerations

## Custom `printf`:
The goal was to implement a minimal version of the `printf` function, focusing on:
- Formatting integers, strings, and characters.
- The function utilizes `stdarg.h` for handling variable arguments.
- The logic ensures unsupported format specifiers are handled gracefully by printing `%` followed by the unsupported character.

## Basic Shell:
The shell was designed to be a lightweight command-line interface that:
- Reads user input via `fgets`.
- Splits input into arguments using `strtok`.
- Forks a new process to execute commands via `execvp`.

Error handling was added to:
- Handle failed `fork` and `execvp` system calls.
- Prevent crashes on invalid user input.
