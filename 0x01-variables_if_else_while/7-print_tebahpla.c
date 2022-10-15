#include <stdio.h>
/*
 * main - prints alphabets inlowercase but in
 * reverse
 *
 * Return: 0
 */
int main(void)
{
int alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
