#include "main.h"
/**
 *get_length- calculates the size of the argument
 *@format:string arguments
 *@i:arguments
 *Return: size
 */

int get_length(const char *format, int *i)
{
	int size = 0;
	int start_i = *i + 1;

	if (format[start_i] == 'l')
	{
		size = S_LONG;
	}
	if (format[start_i] == 'h')
	{
		size = S_SHORT;
	}

	if (size == 0)
	{
		*i = start_i - 1;
	}

	else
		*i = start_i;

	return (size);
}
