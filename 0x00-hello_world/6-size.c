#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char X;
	int Y;
	long int W;
	long int Z;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(X));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(Y));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(W));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(Z));
	return (0);
}
