#include "main.h"

/**
 * print_string - prints a variadic string each per time to stdout
 * @args: variadic parameters
 * Return: number of characters printed on Success
 * if failure -1
 */

int print_string(va_list args)
{
	int i = 0;
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	while (str[i])
	{
		count = write(1, &str[i], 1);
		i++;
	}
	return (count);
}
