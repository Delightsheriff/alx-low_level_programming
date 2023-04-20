#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - Struct format_types
 * @symbol: The conversion specifier
 * @print: The function pointer
 *
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

#endif /* MAIN_H */
