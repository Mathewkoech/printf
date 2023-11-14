#include "main.h"

/**
 * is_digit - checks if char is printable
 * @c: Char to be checked.
 *
 * Return: 1 otherwise 0
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
