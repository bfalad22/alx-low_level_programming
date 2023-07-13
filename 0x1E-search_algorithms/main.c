#include <stdio.h>

int binary_search(int *array, size_t size, int value);

int main(void)
{
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int value = 10;
    int index = binary_search(array, size, value);

    if (index != -1)
        printf("Value %d found at index %d\n", value, index);
    else
        printf("Value %d not found in the array\n", value);

    return 0;
}

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

