#include <stdio.h>
/**
 * main - print decimal numbers to from 0-9
 *
 * Return: 0
 */
int main(void)
{
int count = 0;
while (count < 10)
{
printf("%d",count);
count++;
}
putchar('\n');
return (0);
}
