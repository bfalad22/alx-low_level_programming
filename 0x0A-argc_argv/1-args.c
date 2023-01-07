#include <stdio.h>

/**
 * main - prints the number of arguements passed into it
 * @argc: number of command lne arguments.
 * @argv: array that contains the program comman line arguments.
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
