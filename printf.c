#include "main.h"

/**
 * _printf - produce output according to format
 * @format: format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, printed_charaters = 0;
	int (*f)(va_list);

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			printed_characters = write(1, &format[i], 1);
			count += printed_characters;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			f = get_specifier(&format[i + 1]);

			if (f != NULL)
			{
				printed_characters = f(args);
				count = count + printed_characters;
				i = i + 2;
				continue;
			}

			if (format[i + 1] == '\0')
				break;

			if (format[i + 1] != '\0')
			{
				printed_characters = write(1, &format[i], 1);
				count = count + printed_characters;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}
