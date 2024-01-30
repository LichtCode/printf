#include "main.h"

/**
 * _printf - prints like the printf to stdout
 * @format: string to be printed
 * Return: On success number of string printed.
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	int i = 0, word_count = 0;

	if (format == NULL)
		return (0);

	va_start(arg_list, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			word_count++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				write(1, &format[i], 1);
				word_count++;
			}

			else if (format[i] == 's')
				word_count += args_s(va_arg(arg_list, char *));

			else if (format[i] == 'c')
				word_count += args_c(va_arg(arg_list, int));

			else if (format[i] == 'd')
				word_count += count_int(va_arg(arg_list, int));

			else if (format[i] == 'i')
				word_count += count_int(va_arg(arg_list, int));
		}
		i++;
	}
	return (word_count);
}
