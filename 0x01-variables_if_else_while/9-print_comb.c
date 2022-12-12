#include <stdio.h>

/**
 * main - main block
 * Description: prints all strings from 0 to 9
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
		putchar (',');
		putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
