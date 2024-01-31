#include "main.h"

/**
 * handle_d - print decimal integer to stdout in a format string
 * @args: pointer to first argument of variadic function
 * @count: number of byte written to stdout
 * Return: void
*/
void handle_d(va_list args, int *count)
{
	char buffer[32];
	int index = 0;
	int isNegative = 0;
	char c;
	int digit;
	int arg = va_arg(args, int);

	if (arg >= INT_MIN && arg <= INT_MAX)
	{

		if (arg < 0)
		{
			isNegative = 1;
			arg = -arg;
		}

		digit = 0;

		do {
			digit = arg % 10;
			buffer[index++] = '0' + digit;
			arg /= 10;
		} while (arg > 0);

		if (isNegative)
		{
			write(1, "-", 1);
			(*count)++;
		}

		while (--index >= 0)
		{
			c = buffer[index];
			write(1, &c, 1);
			(*count)++;
		}
	}
	else
		exit (98);
}


