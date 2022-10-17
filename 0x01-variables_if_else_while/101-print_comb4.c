#include <stdio.h>
/**
 * main - print three different combination of
 * 55 = 7;
 * 56 = 8;
 * 57 = 9
 * Return: 0
 */
int main(void)
{
int p1, p2, p3;
for (p1 = 48; p1 <= 55; p1++)
{
for (p2 = p1 + 1; p2 <= 56; p2++)
{
for (p3 = p2 + 1; p3 <= 57; p3++)
{
putchar(p1);
putchar(p2);
putchar(p3);
if (p1 == 7 && p2 == 8 && p3 == 9)
continue;
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
