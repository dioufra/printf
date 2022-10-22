#include "main.h"

/**
 * get_specifier - chek for valid specifier and
 * call th appropriate function for printing
 * @format: format
 * Return: If success return a pointer to a function
 * Else, return NULL
 */

int (*get_specifier(const char *format))(va_list)
{
	int i;

	func_t array[] = {
		{"c", print_charcter},
		{"s", print_string},
		{"%", print_percentage},
		{"i", print_integer},
		{"d", print_decimal},
		{NULL, NULL}
	};

	for (i = 0; array[i].t != NULL; i++)
	{
		if (*(array[i].t) == *format)
			return (array[i].f);
	}

	return (NULL);
}
