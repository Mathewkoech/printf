#include "main.h"

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
