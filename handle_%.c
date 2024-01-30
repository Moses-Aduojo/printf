#include "main.h"

/**
 * handle_percent - print % to stdout in a format string
 * @args: pointer to first argument of variadic function
 * @count: number of byte written to stdout
 * Return: void
*/
void handle_percent(va_list args, int *count)
{
	int written;

	va_arg(args, int);
	written = write(1, "%", 1);
	if (written == -1)
		perror("Error writing to standard output");
	else
		*count += written;
}
