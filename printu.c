#include "main.h"

/**
 * _printf_u - Print unsigned integer
 * @args: va_list containing the unsigned integer to print
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf_u(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char num_str[12];
    int chara = 0;

    int num_len = sprintf(num_str, "%u", num);
    write(1, num_str, num_len);
    chara += num_len;

    return (chara);
}

/**
 * _printf_o - Print octal representation of a number
 * @args: va_list containing the unsigned integer to print
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf_o(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char num_str[12];
    int chara = 0;

    int num_len = sprintf(num_str, "%o", num);
    write(1, num_str, num_len);
    chara += num_len;

    return (chara);
}

/**
 * _printf_x - Print lowercase hexadecimal representation of a number
 * @args: va_list containing the unsigned integer to print
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf_x(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char num_str[12];
    int chara = 0;

    int num_len = sprintf(num_str, "%x", num);
    write(1, num_str, num_len);
    chara += num_len;

    return (chara);
}

/**
 * _printf_X - Print uppercase hexadecimal representation of a number
 * @args: va_list containing the unsigned integer to print
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf_X(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char num_str[12];
    int chara = 0;

    int num_len = sprintf(num_str, "%X", num);
    write(1, num_str, num_len);
    chara += num_len;

    return (chara);
}

