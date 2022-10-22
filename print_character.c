#include "main.h"

/**
 * print_character - print characters to stdout *
 * @args: variadic arguments
 *
 * Return: Number of character printed
 */

int print_character(va_list args)
{
	char c = (char)va_arg(args, int);

	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
