#include "holberton.h"
#include <stdio.h>

/**
 * _puts - returns string and new line
 *
 * @str: return string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
