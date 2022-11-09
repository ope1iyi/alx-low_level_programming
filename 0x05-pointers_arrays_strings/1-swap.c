#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: receives interger 1
 * @b: receives interger 2
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
