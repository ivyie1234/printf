#include "main.h"

/**
 * _printf_bin_recursive - Recursively print binary representation of a number
 * @n: Unsigned integer to print in binary
 * @chara: Counter for the number of characters printed
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf_bin_recursive(unsigned int n, int chara)
{
    if (n / 2 != 0)
        chara = _printf_bin_recursive(n / 2, chara);

    put_char((n % 2) + '0');
    return (chara + 1);
}

/**
 * _printf_bin - Print binary representation of a number
 * @args: va_list containing the unsigned integer to print
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf_bin(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int chara = 0;

    chara = _printf_bin_recursive(num, chara);

    return (chara);
}
