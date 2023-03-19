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
	long long int Z;
	float Q;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(X));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(Y));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(W));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(Z));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(Q));
	return (0);
}
