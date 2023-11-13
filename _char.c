#include "main.h"
/**
*charater - prints character
*@var1: arguemnt
*
*Return: 1
*/
int character(va_list var1)
{
	char s;

	s = va_arg(var1, int);
	_putchar(s);
	return (1);
}
