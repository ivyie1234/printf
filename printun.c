#include "main.h"

/**
 * _printf_unsigned - Prints an unsigned integer to the standard output
 * @n: The unsigned integer to be printed
 * Return: Number of characters printed
 */
int _printf_unsigned(unsigned int n)
{
    int char_count = 0;

    if (n == 0)
    {
        put_char('0');
        char_count++;
    }
    else
    {
        char_count += _printf_unsigned_recursive(n);
    }

    return char_count;
}

/**
 * _printf_unsigned_recursive - Recursively prints the unsigned integer
 * @n: The unsigned integer to be printed
 * Return: Number of characters printed
 */
int _printf_unsigned_recursive(unsigned int n)
{
    int char_count = 0;

    if (n > 0)
        char_count += _printf_unsigned_recursive(n / 10);

    put_char((n % 10) + '0');
    char_count++;

    return char_count;
}
