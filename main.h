#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int (*get_specifier(const char *))(va_list);
int print_character(va_list);
int print_string(va_list);
int print_percentage(va_list);
int print_decimal(va_list);
int print_integer(va_list);


/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: printer function
 *
*/

typedef struct func
{
	char *t;
	int (*f)(va_list);

} func_t;

#endif
