#include "main.h"

/**
 * printf_hex6 - prints an hexgecimal number.
 * @num: parameter, args.
 * Return: int count.
 */

int printf_hex6(unsigned long int num)
{
	long int i, count;
	long int *arr;
	unsigned long int dummy;

	dummy = num;
	count = 0;
	while (num / 16 != 0)
	{
		num /= 16;
		++count;
	}
	++count;
	arr = malloc(count * sizeof(long int));

	for (i = 0; i < count; ++i)
	{
		arr[i] = dummy % 16;
		dummy = dummy / 16;
	}
	for (i = count - 1; i >= 0; --i)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
