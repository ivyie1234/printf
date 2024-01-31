#include "main.h"

/**
 * _printf_S - Print a string with special handling for non-printable characters
 * @str: The string to be printed
 * @buffer: The buffer to store the characters
 * @index: Pointer to the index in the buffer
 * @char_count: Pointer to the character count
 * Return: Number of characters printed
 */
int _printf_S(char *str, char *buffer, int *index, int *char_count)
{
    int count = 0;

    while (*str)
    {
        if (*str >= 32 && *str < 127)
        {
            buffer[(*index)++] = *str;
            (*char_count)++;
            count++;
        }
        else
        {
            buffer[(*index)++] = '\\';
            (*char_count)++;
            count++;

            sprintf(&buffer[*index], "%02X", (unsigned char)*str);
            (*index) += 2;
            (*char_count) += 2;
            count += 3;
        }

        if (*index == BUFFER_SIZE - 1)
        {
		int i;
            for (i = 0; i < *index; i++)
            {
                put_char(buffer[i]);
            }
            *index = 0;
        }

        str++;
    }

    return (count);
}

