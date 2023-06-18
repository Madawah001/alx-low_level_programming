#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints numbers of base sixteen in lowercase
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
	char lu, i;

	for (lu = '0'; lu <= '9'; lu++)
	putchar(lu);
	for (i = 'a'; i <= 'f'; i++)
	putchar(i);
	putchar('\n');

	return (0);

}
