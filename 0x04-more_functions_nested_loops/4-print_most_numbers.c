#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2and 4
 */

void print_most_numbers(void)
{
	char st;

	for (st = 48; st <= 57; st++)
	{
		if (st != 50 || st != 52)
		{
			_putchar(st);
		}
	}
	_putchar('\n');
}
