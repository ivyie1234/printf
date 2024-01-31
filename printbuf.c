#include "main.h"

/**
 * _printf_chars - Prints a character to a buffer and updates index and char_count
 * @c: The character to be printed
 * @buffer: The buffer to store the characters
 * @index: Pointer to the index in the buffer
 * @char_count: Pointer to the character count
 * Return: Number of characters printed (always 1)
 */
int _printf_chars(char c, char *buffer, int *index, int *char_count)
{
    buffer[(*index)++] = c;
    (*char_count)++;
    return 1;
}

/**
 * _printf_strs - Prints a string to a buffer and updates index and char_count
 * @str: The string to be printed
 * @buffer: The buffer to store the characters
 * @index: Pointer to the index in the buffer
 * @char_count: Pointer to the character count
 * Return: Number of characters printed
 */
int _printf_strs(char *str, char *buffer, int *index, int *char_count)
{
    int count = 0;
    while (*str)
    {
        buffer[(*index)++] = *str++;
        count++;
        (*char_count)++;
    }
    return count;
}

/**
 * _printf_ints - Prints an integer to a buffer and updates index and char_count
 * @n: The integer to be printed
 * @buffer: The buffer to store the characters
 * @index: Pointer to the index in the buffer
 * @char_count: Pointer to the character count
 * Return: Number of characters printed
 */
int _printf_ints(int n, char *buffer, int *index, int *char_count)
{
    int count = 0;

    if (n < 0)
    {
        buffer[(*index)++] = '-';
        (*char_count)++;
        n = -n;
    }

    count += _printf_unsigneds((unsigned int)n, buffer, index, char_count);

    return count;
}

/**
 * _printf_unsigneds - Prints an unsigned integer to a buffer and updates index and char_count
 * @n: The unsigned integer to be printed
 * @buffer: The buffer to store the characters
 * @index: Pointer to the index in the buffer
 * @char_count: Pointer to the character count
 * Return: Number of characters printed
 */
int _printf_unsigneds(unsigned int n, char *buffer, int *index, int *char_count)
{
    int count = 0;

    if (n == 0)
    {
        buffer[(*index)++] = '0';
        (*char_count)++;
        count++;
    }
    else
    {
        count += _printf_unsigned_recursives(n, buffer, index, char_count);
    }

    return count;
}

/**
 * _printf_unsigned_recursives - Recursively prints the unsigned integer to a buffer
 * and updates index and char_count
 * @n: The unsigned integer to be printed
 * @buffer: The buffer to store the characters
 * @index: Pointer to the index in the buffer
 * @char_count: Pointer to the character count
 * Return: Number of characters printed
 */
int _printf_unsigned_recursives(unsigned int n, char *buffer, int *index, int *char_count)
{
    int count = 0;

    if (n > 0)
        count += _printf_unsigned_recursives(n / 10, buffer, index, char_count);

    buffer[(*index)++] = (n % 10) + '0';
    (*char_count)++;
    count++;

    return count;
}

