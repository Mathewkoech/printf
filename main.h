#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
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

/* Functions to handle other specifiers */
int get_precision(const char *format, int *i, va_list args);
int get_width(const char *format, int *i, va_list args);
int get_flags(const char *format, int *i);
int get_size(const char *format, int *i);

#endif
