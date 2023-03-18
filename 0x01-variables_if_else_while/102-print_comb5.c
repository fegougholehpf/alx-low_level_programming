#include <stdio.h>

/**
 * main - main function
 *
 * Description: Print all possible combinations of two two digit numbers
 * Return: always 0
 */
int main(void)
{
	int x1;
	int x2;
	int y1;
	int y2;

	for (x1 = 0 ; x1 < 10 ; x1++)
	{
		for (x2 = 0 ; x2 < 10 ; x2++)
		{
			for (y1 = x1 ; y1 < 10 ; y1++)
			{
				for (y2 = ((x1 == y1) ? (x2 + 1) : 0) ; y2 < 10 ; y2++)
				{
					putchar(x1 + '0');
					putchar(x2 + '0');
					putchar(' ');
					putchar(y1 + '0');
					putchar(y2 + '0');

					if (x1 != 9 || x2 != 8 || y1 != 9 || y2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
