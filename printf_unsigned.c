#include "main.h"

/**
 * printf_unsigned - prints integer
 * @ap: parameters
 * Return: int.
 */

int printf_unsigned(va_list ap)
{
	unsigned int n;
	int i, num, lst, digit, e_;

	i = 1;
	e_ = 1;
	n = va_arg(ap, unsigned int);
	lst = n % 10;

	n = n / 10;
	num = n;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lst = -lst;
		++i;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			e_ = e_ * 10;
			num = num / 10;
		}
		num = n;
		while (e_ > 0)
		{
			digit = num / e_;
			_putchar(digit + '0');
			num = num - (digit * e_);
			e_ = e_ / 10;
			++i;
		}
	}
	_putchar(lst + '0');
	return (i);
}
