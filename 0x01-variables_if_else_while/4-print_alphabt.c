#include <stdio.h>
/**
 * main - print lowercase alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
char lower = 'a';
while (lower <= 'z')
{
if (lower == 'q' || lower == 'e')
{
continue;
}
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
