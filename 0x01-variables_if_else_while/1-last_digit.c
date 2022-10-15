#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to the variable n,
 * if the last digit of n is greater than 5:
 * print "Last digit of n is %d and is greater than 5"
 * if the last digit is 0: print "Last digit of n is %d and is zero"
 * if the last digit is less than 6 and not 0:
 * print "is less than 6 and not 0"
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int LastDigit = n % 10;
if (LastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
}
else if (LastDigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
}
else
{
printf("Last digit of %d is %d and is zero");
}
return (0);
}
