#include "main.h"

/**
 * print_char - Prints a single character
 * @c: The character to print
 *
 * Return: On success, returns the number of characters printed.
 *          On error, returns -1.
 */
int print_char(int c)
{
	write(1, &c, 1);
}

/**
 * print_str - Prints a string
 * @str: The string to print
 *
 * Return: The number of characters printed.
 */
int print_str(char *str)
{
	int count = 0;

	while (*str)
	{
		print_char((int)*str);
		count++;
		str++;
	}

	return (count);
}
