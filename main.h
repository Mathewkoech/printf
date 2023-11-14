#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_ZERO 1
#define F_HASH 2
#define F_SPACE 4
#define F_MINUS 8
#define F_PLUS 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct format - converter for printf
 * @p_: type char pointer of the specifier
 * @func: function for the conversion specifier
 *
 */

typedef struct format
{
	char *p_;
	int (*func)();
} go;

int _putchar(char c);
int print_37(void);
int print_c(va_list ap);
int printf_s(va_list ap);
int _strlen(char *s);
int _strlenc(const char *s);
int print_i(va_list ap);
int print_d(va_list ap);
int printf_bin(va_list ap);
int printf_oct(va_list ap);
int printf_unsigned(va_list ap);
int printf_hex(va_list ap);
int printf_HEX(va_list ap);
int printf_hex6(unsigned long int num);
int print_string5(va_list ap);
int _printf(const char *format, ...);
int printf_HEX5(unsigned int ex_);
int printf_ptr(va_list ap);
int print_revstr(va_list ap);
int printf_rot13(va_list ap);

/* Functions to handle other specifiers */
int get_precision(const char *format, int *i, va_list args);
int get_width(const char *format, int *i, va_list args);
int get_flags(const char *format, int *i);
int get_size(const char *format, int *i);

/*utils functions*/
int is_digit(char);

#endif
