#include "main.h"

/**
 * void swap_int - functions that swaps the value of integers
 * @a: Integer to swap
 * @b: Integer to swap
 *
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
