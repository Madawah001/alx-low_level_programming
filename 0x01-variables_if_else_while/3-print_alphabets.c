#include <stdio.h>
/**
 * main - Prints alphabets in lowercase and in uppercase
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
	char lucas;

	for (lucas = 'a'; lucas <= 'z'; lucas++)
	putchar(lucas);
	for (lucas = 'A'; lucas <= 'Z'; lucas++)
	putchar(lucas);
	putchar('\n');
	return (0);

}

