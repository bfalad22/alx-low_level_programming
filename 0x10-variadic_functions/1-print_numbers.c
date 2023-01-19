#include "variadic_functions.h"

/**
 * print_numbers -  prints all the parameters passed to it
 * @n: number of args passed
 * @separator: is the string to be printed between numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;

	va_start(param, n);
	if (n != 0)
	{
			for (i = 0; i < n; i++)
			{
						if (i != n - 1)
						{
																										if (separator != NULL)																																						printf("%d%s", va_arg(param, int), separator);																														else
																												printf("%d", va_arg(param, int));
																												}
																										else
																										{
																										printf("%d", va_arg(param, int));
																										}
																						}
		}
								printf("\n");
							va_end(param);
}
