#include "main.h"

/**
 * print_digit - Prints a number in the specified base
 * @n: The number to print
 * @base: The base in which to print the number
 *
 * Return: The number of characters printed.
 */
int print_digit(long n, int base)
{
	int count = 0;
	char *symbols = "0123456789abcdef";

	if (n < 0)
	{
		count += print_char('-');
		n = -n;
	}

	if (n < base)
		count += print_char(symbols[n]);
	else
	{
		count = print_digit(n / base, base);
		return (count + print_digit(n % base, base));
	}
}
