#include <stdio.h>
/**
 * main - print digit from 0-9
 * ascii value for 0 is 48 -> 9 is 57
 * Return: 0
 */
int main(void)
{
int count = 48;
while (count < 57)
{
putchar(count);
count++;
}
putchar('\n');
return (0);
}
