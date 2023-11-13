#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/**
*struct format - matches conversion specifier for printf
*@id: specifier
*/
typedef struct format
{
char *id;
int (*f)();
} fmt_t;


int _putchar(char c);
int _printf(const char *format, ...);
int string(va_list var1);
int character(va_list var1);
int _37(void);
int _strlen(char *s);
int _dec(va_list args);
int _int(va_list args);
int _bin(va_list var1);
int _unsignedint(va_list args);
int _oct(va_list var1);
int _hexa(va_list var1);
int _HEXA(va_list var1);
#endif
