#include "main.h"

/**
 * print_numbers - print number from 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	char st;

	for (st = 48; st <= 57; st++)
	{
		_putchar(st);
	}
	_putchar('\n');
}
