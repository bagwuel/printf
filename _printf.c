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
	int i, num, count = 0;
	unsigned int unum;
	char specifiers[] ={'c', 's', '%', 'i', 'd', 'b', 'u', 'o', 'x', 'X', '\0'};
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
			if (!_strchr(specifiers, format[i + 1]))
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
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				num = va_arg(arg, int);
				count += print_number(num);
				i++;
			}
			else if (format[i + 1] == 'b')
			{
				num = va_arg(arg, int);
				count += print_binary(num);
				i++;
			}
			else if (format[i + 1] == 'u')
			{
				unum = va_arg(arg, unsigned int);
				count += print_uint(unum);
				i++;
			}
			else if (format[i + 1] == 'o')
			{
				unum = va_arg(arg, unsigned int);
				count += print_octal(unum);
				i++;
			}
			else if (format[i + 1] == 'x' || format[i + 1] == 'X')
			{
				unum = va_arg(arg, unsigned int);
				count += print_hex(unum, format[i + 1]);
				i++;
			}
		}
		i++;
	}
	va_end(arg);
	return (count);
}
