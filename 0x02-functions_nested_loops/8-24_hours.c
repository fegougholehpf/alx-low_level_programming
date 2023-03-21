#include "main.h"

/**
 * jack_bauer - prints 24hrs time
 *
 * Return: always 0
 */


void jack_bauer(void)
{
	int i;
	int g;

	for (i = 0 ; i < 24 ; i++)
	{
		for (g = 0 ; g < 60 ; g++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(g / 10 + '0');
			_putchar(g % 10 + '0');
			_putchar('\n');
		}
	}
}
