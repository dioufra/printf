#include "main.h"

/**
 * get_specifier - check for valid specifier and 
 * call the appropriate function for printing
 * 
 * @format: format (char*)
 * 
 * Return: If success return a poiinter to a function
 *         Else, return NULL
*/

int (*get_specifier(const char *format))(va_list)
{
    int i;
 
    func_t array[] = {
        {"c", print_character},
        {"s", print_string},
        {"%", print_percentage},
        {"i", print_integer},
        {"d", print_decimal},
        {NULL, NULL}
    };

    for (i = 0; array[i].t != NULL; i++) // t is c, s, % or NULL --- declared in main
    {
        if (*(array[i].t) == *format)
        {
            /* Return the corresponding function */
            return (array[i].f);
        }
    }

    /* no match if found */
    return (NULL);
}
