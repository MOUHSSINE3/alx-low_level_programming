#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: 0 (Success)
 */
int main (void)
{
	char X;
	int Y;
	long int W;
	long int Z;

	printf("Size of char: zu% byte(s)\n", (unsigned long)sizeof(X));
	printf("Size of int: zu% byte(s)\n", (unsigned long)sizeof(Y));
	printf("Size of long int: zu% byte(s)\n", (unsigned long)sizeof(W));
	printf("Size of long long: zu% byte(s)\n", (unsigned long)sizeof(Z));
	return (0);
}
