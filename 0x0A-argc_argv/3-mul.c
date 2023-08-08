#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments provided.
* @argv: An array of pointers to the command-line arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;

/* Check if the program received two arguments (numbers)*/
if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Convert the arguments to integers*/
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

/* Perform the multiplication*/
result = num1 * num2;

/*Print the result*/
printf("%d\n", result);

return (0);
}
