#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char b;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (b = 'a' ; b <= 'f' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
