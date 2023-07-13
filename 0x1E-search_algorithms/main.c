#include <stdio.h>
#include "search_algos.h"

int main(void)
{
	int array[] = {4, 6, 2, 8, 10, 12, 14, 16, 18, 20};
	size_t size = sizeof(array) / sizeof(array[0]);
	int value = 10;
	int index = linear_search(array, size, value);

	if (index != -1)
		printf("Value %d found at index %d\n", value, index);
	else
		printf("Value %d not found in the array\n", value);

	return 0;
}

