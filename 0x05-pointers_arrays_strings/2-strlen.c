#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns string length
 * @s: prints s
 * Return: length of string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	return (n);
}
