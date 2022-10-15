#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
char beg = 'a';
while (beg <= 'z')
{
putchar(beg);
beg++;
}
putchar('\n');
return (0);
}
