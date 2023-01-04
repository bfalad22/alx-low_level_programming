#include "main.h"

/**
* factorial - returns a factorial of a given number
* @n: number
* Return: void
*/
int factorial(int n)
{
	if (n < 0)

	return (-1);

	else if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
