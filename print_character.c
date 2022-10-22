#include "main.h"
/**
 * print_chr - print characters to stdout
 * 
 * @args: variadic parameters
 * 
 * Return: Number of character printed
*/

int print_chr(va_list args)
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
