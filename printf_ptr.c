#include "main.h"

/**
 * printf_ptr - entry. prints address
 * @ap: parameter.argument pointer.
 * Return: int.
 */

int printf_ptr(va_list ap)
{
	void *p;
	char *s = "(nil)";
	long int p_;
	int i, j;

	p = va_arg(ap, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	p_ = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	j = printf_hex6(p_);
	return (j + 2);
}