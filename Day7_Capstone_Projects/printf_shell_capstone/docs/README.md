# Capstone Project: Custom `printf` and Basic Shell

## Overview

This project is a capstone for Day 7, covering:
- **Custom `printf` Implementation**: A manual implementation of the standard library function `printf`.
- **Basic Shell**: A simple shell that can handle user inputs and execute basic commands.

## Folder Structure

- `src/`: Contains the source code.
- `include/`: Header files for the source code.
- `tests/`: Unit tests for validating the correctness of the implementation.
- `docs/`: Documentation, including this `README` and design considerations.

## Features

### Custom `printf`:
- Handles integer, character, and string formatting.
- Error handling for unsupported specifiers.

### Basic Shell:
- Supports executing basic system commands (e.g., `ls`, `pwd`).
- Implements process management with `fork` and `exec`.

## How to Run

1. To build the project:
    ```
    make
    ```

2. To run the `printf` function:
    ```
    ./bin/printf
    ```

3. To run the shell:
    ```
    ./bin/shell
    ```

4. To run unit tests:
    ```
    make test_printf
    make test_shell
    ```

## License

MIT License
