#include "main.h"

/**
 * print_helper - Helper function for printing formatted output
 * @specifier: The format specifier
 * @args: The variable argument list
 *
 * Return: The number of characters printed.
 */
int print_helper(char specifier, va_list args)
{
	int count = 0;

	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char*));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit(va_arg(args, long), 10);
	else if (specifier == 'x')
		count += print_digit(va_arg(args, unsigned int), 16);
	else
	{
		count += print_char('%');
		count += print_char(specifier);
	}

	return (count);
}
