#include "main.h"

/**
 * handle_s - print string to stdout in a format string
 * @args: pointer to first argument of variadic function
 * @count: number of byte written to stdout
 * Return: void
*/
void handle_s(va_list args, int *count)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		*count += write(1, "(null)", 6);
		exit(98);
	}
	else
	{
		if (strnlen(s, INT_MAX) == INT_MAX)
			*count += write(1, "Invalid string argument", 23);
		else
			*count += write(1, s, strlen(s));
	}
}
