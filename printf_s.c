#include "main.h"
/**
 * printf_s - print a string.
 * @ap: argument.
 * Return: the length of the string.
 */

int printf_s(va_list ap)
{
	int i, len;
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
