#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

double average(int count, ...) {
    va_list args;
    double sum = 0.0;

    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);

    return (count == 0) ? 0 : sum / count;
}