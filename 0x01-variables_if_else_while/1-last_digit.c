#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (1 > 5)
{
	printif("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (1 == 0)
{
	printif("Last digit of %d is %d and is 0\n", n, l);
}
else
{
	printif("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
}
