#include <stdio.h>
/**
 * Main - prints exactly  "and that piece of art is useful\"
 * - Dora Korpar, 2015-10-19\n"
 * to the stdard output
 * Return: Always 1 on (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
