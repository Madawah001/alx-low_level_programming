#include "main.h"

/**
 * print_alphabet_x10 - Makes alphabets ten times
 * Return: (void)
 *
 */
void print_alphabet_x10(void)
{
	char d;
	int i = 0;

	while (i <= 9)
	{
	for (d = 'a'; d <= 'z'; d++)
	{
	_putchar(d);
	}
	_putchar ('\n');
	i++;
	}
}
