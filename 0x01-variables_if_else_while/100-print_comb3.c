#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int i, p;

	for (i = '0'; i < '9'; i++)
	{
	for (p = '1'; p <= '9'; p++)
	{
	if (p != i)
	{
	putchar(i);
	putchar(p);
	if (i == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
