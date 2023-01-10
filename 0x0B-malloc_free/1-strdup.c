#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j = 0;

	if (str == NULL)
	return (NULL);

	while (str[j] != '\0')
		j++;

	strout = (char *)malloc((sizeof(char) * j) + 1);
	if (strout == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		strout[i] = str[i];
	strout[j] = '\0';

	return (strout);
}
