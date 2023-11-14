#include "main.h"

/**
 * printf_oct - prints an octal number.
 * @ap: parameter.
 * Return: int counter.
 */
int printf_oct(va_list ap)
{
	int i;
	int *arr;
	int count;
	unsigned int num, dummy;

	count = 0;
	num = va_arg(ap, unsigned int);
	dummy = num;

	while (num / 8 != 0)
	{
		num /= 8;
		++count;
	}
	++count;

	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; ++i)
	{
		arr[i] = dummy % 8;
		dummy /= 8;
	}

	for (i = count - 1; i >= 0; --i)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
