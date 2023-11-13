#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the string that takes specifiers
 *
 * Description: Printf is a function in
 * C programming that produces
 * an output according to a format by excluding null byte
 *
 * Return: Always Success.
 */

int _printf(const char *format, ...)
{
	fmt_t t[] = {
		{"%s", string}, {"%c", character},
		{"%%", _37}, {"%i", _int},
		{"%d", _dec},
		{"%b", _bin}, {"%u", _unsignedint},
		{"%o", _oct}, {"%x", _hexa}, {"%X", _HEXA}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        	return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (j >= 0)
			{
				if (t[j].id[0] == format[i] && t[j].id[1] == format[i + 1])
				{
				len += t[j].f(args);
				i = i + 2;
				break;
				}	
				j--;
			}
			if (j < 0)
			{
				_putchar('%');
				len++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
