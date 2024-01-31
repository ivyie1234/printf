#include "main.h"

/**
 * _printf - function that prints
 * @format: character string
 */

int _printf(const char *format, ...)
{
	int i;
	int index = 0;
	char buffer[BUFFER_SIZE];
	int chara = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			 buffer[index++] = *format;
			chara++;

			if (index == BUFFER_SIZE - 1)
			{
				int i;

				for (i = 0; i < index; i++)
				{
					put_char(buffer[i]);
				}
				index = 0;
			}
			put_char(*format);
			chara++;
		}
		else
		{
			format++;
		if (*format == '\0')
			break;
		if (*format == '%')	
		{
			put_char(*format);
			chara++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(args, int);

			put_char(c);
			chara++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char*);

			while (*str)
			{
				put_char(*str);
				chara++;
				str++;
			}
		}
		else if (*format == 'd' || *format == 'i')
		{
			int num = va_arg(args, int);
			char num_str[12];
			int num_len = sprintf(num_str, "%d", num);

			write(1, num_str, num_len);
			chara += num_len;
		}
		else if (*format == 'b')
		{
			chara += _printf_bin(args);
		}
		else if (*format == 'u')
		{
			chara += _printf_u(args);
		}
		else if (*format == 'o')
		{
			chara += _printf_o(args);
		}
		else if (*format == 'x')
		{
			chara += _printf_x(args);
		}
		else if (*format == 'X')
		{
			chara += _printf_X(args);
		}
	}
	format++;
	}

		for (i = 0; i < index; i++)
		{
			put_char(buffer[i]);
		}

		va_end(args);
		return (chara);
}
