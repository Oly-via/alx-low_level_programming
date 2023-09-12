#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int b, c, d;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 10; c++)
		{
			d = c * b;
			if (c == 0)
			{
				_putchar(d + '0');
			}

			if (d < 10 && c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			} else if (d >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
