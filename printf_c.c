#include "main.h"

/**
 * print_c - entry. prints a character.
 * @ap: arg param.
 * Return: int.
 */

int print_c(va_list ap)
{
	char p;

	p = va_arg(ap, int);
	_putchar(p);
	return (1);
}
