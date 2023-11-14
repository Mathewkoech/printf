#include "main.h"

/**
 * printf_HEX - entry. prints hexgecimal number.
 * @ap: parameter.
 * Return: int.
 */

int printf_HEX(va_list ap)
{
	int i, count;
	int *arr;
	unsigned int num, dummy;

	num = va_arg(ap, unsigned int);
	dummy = num;
	count = 0;
	while (num / 16 != 0)
	{
		num /= 16;
		++count;
	}
	++count;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; ++i)
	{
		arr[i] = dummy % 16;
		dummy /= 16;
	}

	for (i = count - 1; i >= 0; --i)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
