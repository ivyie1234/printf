#include "main.h"

/**
 * _printf_char - Prints a character to the standard output
 * @c: The character to be printed
 * Return: Number of characters printed (1)
 */
int _printf_char(int c)
{
    return put_char(c);
}

/**
 * _printf_str - Prints a string to the standard output
 * @str: The string to be printed
 * Return: Number of characters printed
 */
int _printf_str(char *str)
{
    int char_count = 0;

    while (*str)
    {
        put_char(*str);
        char_count++;
        str++;
    }

    return char_count;
}
