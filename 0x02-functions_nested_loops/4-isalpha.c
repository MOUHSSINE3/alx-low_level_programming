#include "main.h"
/**
 *  _isalpha - check alphabet
 *  @c: character
 *  Return: 0 or 1
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
