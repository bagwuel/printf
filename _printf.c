#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: the formatting of the output
 * @...: the rest parameters
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	char c;
	char *s;
	va_list arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] != 'c' && format[i + 1] != 's')
			{
				_putchar('%');
				count++;
				if (format[i + 1] == '%')
					i++;
			}
			if (format[i + 1] == 'c')
			{
				c = va_arg(arg, int);
				_putchar(c);
				count++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				s = va_arg(arg, char *);
				while (*s)
				{
					_putchar(*s++);
					count++;
					i++;
				}
			}
		}
		i++;
	}
	va_end(arg);
	return (count);
}
