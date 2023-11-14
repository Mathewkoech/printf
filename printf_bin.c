#include "main.h"

/**
 * printf_bin - prints binary number.
 * @ap: parameter.
 * Return: int
 */

int printf_bin(va_list ap)
{
	int flag = 0;
	int count = 0;
	int i, a, b;
	unsigned int num, p;

	a = 1;
	num = va_arg(ap, unsigned int);

	for (i = 0; i < 32; ++i)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
