#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array == NULL || action == NULL)
		return;

	while (n < size)
	{
		action(array[i]);
		n++;
	}
}

