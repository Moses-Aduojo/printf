#include "main.h"

/**
 * _printf - mimic printf function of the stdio.h
 * @format: pointer to first argument of the variadic function
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					handle_c(args, &count);
					break;
				case 's':
					handle_s(args, &count);
					break;
				case '%':
					handle_percent(args, &count);
					break;
				case 'd':
					handle_d(args, &count);
					break;
				default:
					count += write(1, "Invalid specifier", 17);
					break;
			}
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
