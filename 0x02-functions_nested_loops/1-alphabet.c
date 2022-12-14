#include "main.h"

/**
 * print alphabet - prints the alphabets, in lowercase,followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);


	_putchar('\n');
}
