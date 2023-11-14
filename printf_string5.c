#include "main.h"

/**
 * print_string5 - entry. print string.
 * @ap: parameter.
 * Return: int.
 */

int print_string5(va_list ap)
{
	char *s;
	int i, len;
	int val;

	len = 0;
	s = va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			val = s[i];
			if (val < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX5(val);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
