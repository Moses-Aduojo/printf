#include "main.h"

/**
 * handle_c - print a character to stdout in a format string
 * @args: pointer to first argument of variadic function
 * @count: number of byte written to stdout
 * Return: void
*/
void handle_c(va_list args, int *count)
{
	int c = va_arg(args, int);

	if (write(1, &c, 1) == -1)
		exit(EXIT_FAILURE);
	else
		*count += 1;
}
