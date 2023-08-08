#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of a program.
* @ac: The number of arguments.
* @av: An array of pointers to the arguments.
*
* Return: A pointer to a newly allocated string containing
* the concatenated arguments,
*         separated by newlines, or NULL on failure.
*/
char *argstostr(int ac, char **av)
{
char *concatenated;
int total_length = 0;
int i, j, k;

if (ac <= 0 || av == NULL)
return (NULL);

/* Calculate the total length needed for the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++; /* For the newline character */
}

/* Allocate memory for the concatenated string */
concatenated = (char *)malloc((total_length + 1) * sizeof(char));

if (concatenated == NULL)
return (NULL);

/* Copy the arguments into the concatenated string */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[k] = av[i][j];
k++;
}
concatenated[k] = '\n';
k++;
}
concatenated[k] = '\0';

return (concatenated);
}
