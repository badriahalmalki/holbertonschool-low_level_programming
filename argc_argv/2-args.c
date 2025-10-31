#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
