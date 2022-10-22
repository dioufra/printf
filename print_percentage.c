#include "main.h"

/**
 * print_percentage - print character '%' to stdout
 * @args: variadic parameters
 * Return: Number of character printed
 */

int print_percentage(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}
