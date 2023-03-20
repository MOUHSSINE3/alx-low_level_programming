#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	print("%d is positive", n);
	}
	else if (n == 0)
	{
		print("%d is zero", n);
	}
	else
	{
	print("%d is negative", n)
	}
	/* your code goes there */
	return (0);
}
