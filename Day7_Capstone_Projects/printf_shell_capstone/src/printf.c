#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

// Custom implementation of printf
int my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    const char *p;
    for (p = format; *p != '\0'; p++) {
        if (*p == '%' && *(p + 1) != '\0') {
            p++; // move past %
            switch (*p) {
                case 'd': {
                    int i = va_arg(args, int);
                    printf("%d", i);
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char*);
                    printf("%s", s);
                    break;
                }
                // Add more specifiers as needed
                default:
                    printf("%%");
                    break;
            }
        } else {
            putchar(*p);
        }
    }

    va_end(args);
    return 0;
}
