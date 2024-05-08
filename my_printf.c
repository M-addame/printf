#include "main.h"

/**
 * my_printf - Prints formatted output to stdout
 * @format: The format string
 * @...: Additional arguments
 *
 * Return: The number of characters printed.
 */
int my_printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
			count += print_helper(*(++format), args);
		else
			count += print_char(*format);
		format++;
	}

	return (count);
}
