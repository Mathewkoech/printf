#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	int j, start_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_AR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (start_i = *i + 1; format[start_i] != '\0'; start_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
		{
			if (format[start_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_AR[j];
				break;
			}
		}
		if (FLAGS_CH[j] == 0)
			break;
	}
	*i = start_i - 1;

	return (flags);
}
