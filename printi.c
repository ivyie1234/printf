#include "main.h"

/**
 * _printf_int - Prints an integer to the standard output
 * @n: The integer to be printed
 * Return: Number of characters printed
 */
int _printf_int(int n)
{
    int char_count = 0;

    if (n < 0)
    {
        put_char('-');
        char_count++;
        n = -n;
    }

    char_count += _printf_unsigned((unsigned int)n);

    return char_count;
}
