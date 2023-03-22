#include "main.h"
/**
 * _islower - lowercase
 * @c: check character
 * Return: c
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
