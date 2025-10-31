#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
    int i, j, sum = 0;

    if (argc == 1)
    {
        _putchar("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                _putchar("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }

    _putchar("%d\n", sum);
    return (0);
}
