#include <stddef.h>

/**
 * binary_search - Performs binary search on a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;

	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1;
}

