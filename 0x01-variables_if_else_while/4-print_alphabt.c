#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabets in lowercase
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
	char lu, e, q;

	e = 'e';
	q = 'q';


	for (lu = 'a'; lu <= 'z'; lu++)
	{
	if (lu != e && lu != q)
	putchar(lu);
	}
	putchar('\n');

	return (0);

}
