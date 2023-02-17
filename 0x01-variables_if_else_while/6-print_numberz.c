#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 0)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
