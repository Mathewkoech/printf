#include "main.h"

/**
 * printf_HEX5 - entry. prints hexgecimal number.
 * @ex_: parameter.
 * Return: int.
 */

int printf_HEX5(unsigned int ex_)
{
	int i, count;
	int *arr;
	unsigned int dummy;

	dummy = ex_;
	count = 0;
	while (ex_ / 16 != 0)
	{
		ex_ /= 16;
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
