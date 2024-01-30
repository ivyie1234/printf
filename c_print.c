#include "main.h"

/**
 * _printf - function that prints
 * @format: character string
 */

int _printf(const char *format, ...)
{
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
			write(1, format, 1);
			chara++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				chara++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				chara++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int len = 0;

				while (str[len] != '\0')
					len++;
				write(1, str, len);
				chara += len;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				char num_str[12];
				int num_len = sprintf(num_str, "%d", num);
				write(1, num_str, num_len);
				chara += num_len;
			}
		}
		format++;
	}

	va_end(args);
	return (chara);
}

