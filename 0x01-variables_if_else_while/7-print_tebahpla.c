#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print alphabets in reverse
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char lu;

	for (lu = 'z'; lu >= 'a'; lu--)
	putchar(lu);
	putchar('\n');

	return (0);

}
