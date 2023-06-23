#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 * @x: The number to be checked
 * Return: 1 for uppercase or 0 for otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
