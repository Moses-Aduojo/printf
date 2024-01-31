#include "main.h"

/**
 * handle_b - write integer in in binary to stdout in a format string
 * @args: list of variable argument
 * @count: pointer to number of byte written
 * Return: void
 */
void handle_b(va_list args, int *count)
{
	unsigned int arg;
	char bit[33] = {0};
	char reversed_bit[33] = {0};
	int i = 0, len;

	arg = va_arg(args, unsigned int);

	do {
		bit[i++] = (arg % 2) + '0';
		arg /= 2;
	} while (arg > 0);

	len = strlen(bit);

	for (i = 0; i < len; i++)
	{
		reversed_bit[i] = bit[len - i - 1];
	}
	reversed_bit[len + 1] = '\0';
	*count = write(1, reversed_bit, len);
}

