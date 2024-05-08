#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>


int print_char(int c);
int print_str(char *str);
int print_digit(long n, int base);
int print_helper(char specifier, va_list args);
int my_printf(const char *format, ...);
#endif /* MAIN_H */
