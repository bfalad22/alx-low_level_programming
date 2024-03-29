#include "variadic_functions.h"

/**
 * sum_them_all -  adds all the parameters passed to it
 * @n: number of args passed
 *
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list param;

	va_start(param, n);
	if (n != 0)
	{
	for (i = 0; i < n; i++)
	sum += va_arg(param, int);
	}
	va_end(param);

	return (sum);
}
