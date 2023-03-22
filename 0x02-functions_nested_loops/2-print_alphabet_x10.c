#include "main.h"
/**
 * print_alphabet_x10 - Entry 10 time alphapet
 * Return: 0
*/
void print_alphabet_x10(void)
{
	int i = 1;
	char c;


	while (i <= 10)

	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}

}
