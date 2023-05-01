#include "function_pointers.h"
/**
 * int_index - return index place
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (!array || size <= 0 || cmp == NULL)
		return (-1);

	while(n < size)
	{
		if (cmp(array[i]))
			return (i);
		n++;
	}
	return (-1);
}
