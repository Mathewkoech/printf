#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @args: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list args)
{
	int start_i;
	int width = 0;

	for (start_i = *i + 1; format[start_i] != '\0'; start_i++)
	{
		if (is_digit(format[start_i]))
		{
			width = width * 10 + (format[start_i] - '0');
		}
		else if (format[start_i] == '*')
		{
			start_i++;
			width = va_arg(args, int);
			break;
		}
		else
			break;
	}

	*i = start_i - 1;

	return (width);
}
