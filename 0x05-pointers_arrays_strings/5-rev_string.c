#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - returns a reversed string
 *
 * @s: parameter of function
 */
void rev_string(char *s)
{
	int i, n, m;
	char temp;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	for (i = 0; i < (n - 1); i++)
	{
		for (m = i + 1; m > 0; m--)
		{
			temp = *(s + m);
			*(s + m) = *(s + (m - 1));
			*(s + (m - 1)) = temp;
		}
	}
}
