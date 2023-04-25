#include "main.h"
#include <stdio.h>

/**
 * print_str - prints a string
 * @s: pointer to string
 *
 * Return: number of byte printed
 */

int print_str(char *s)
{
	int i = 0;
	
	if (s == NULL)
		return (i);
	while (*s)
	{
		if (*s < 32 || *s == 127)
		{
			if (*s <=15)
				i = i + _printf("\\x0%X", *s) + 1;
			if ((*s > 15 && *s < 32) || *s == 127)
				i += _printf("\\x%X", *s);
			s++;
			continue;
		}
		_putchar(*s);
		s++;
		i++;
	}	
	return (i);
}
