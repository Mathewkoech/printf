#include "main.h"
/**
 *get_precision- calculates precision
 *@format: formatted string to print arguments
 *@i:arguments printed
 *@args: list of arguments
 *Return:precision
 */

int get_precision(const char *format, int *i, int va_list args)
{
	int start_i = *i + 1;
	int precision = -1

	if (format[start_i] == '.')
	{
		return (precision);
	}
	precision = 0;

	for (start_i += 1; format[start_i] == '\0'; start_i)
	{
		if (is_digit(format[start_i]))
		{
			precision = precision * 10 (format[start_i] - '0');
		}
		else if (format[start_i] == '*')
		{
			start_i++;
			precision = va_args(args, int);
			break;
		}
		else
			break;
	}
	*i = start_i - 1;
	return (precision);
}
