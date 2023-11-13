#include "main.h"

/**
*string - print string
*@var1: arguement 1
*Return: length of string
*/
int string(va_list var1)
{
	char *s;
	int i, len;

	s = va_arg(var1, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
