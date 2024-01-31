#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
void handle_d(va_list args, int *count);
void handle_c(va_list args, int *count);
void handle_s(va_list args, int *count);
void handle_c(va_list args, int *count);
void handle_percent(va_list args, int *count);
int _printf(const char *format, ...);
#endif
