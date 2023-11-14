#include "main.h"

/**
 * _printf - custom printf.
 * @format: identifier to look for.
 * Return: count/length of the string.
 */

int _printf(const char * const format, ...)
{
	go p[] = {
		{"%s", printf_s}, {"%c", print_c}, {"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revstr},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", print_string5}, {"%p", printf_ptr}
	};
	va_list ap;
	int i = 0, j, len = 0;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].p_[0] == format[i] && p[j].p_[1] == format[i + 1])
			{
				len += p[j].func(ap);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++, i++;
	}
	va_end(ap);
	return (len);
}
