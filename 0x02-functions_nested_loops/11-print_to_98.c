#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from a number to 98
 * @n: receives input
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			num++;
		}
	
	}
	printf("98\n");

}
