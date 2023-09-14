#include "main.h"

/**
 * print_most_numbers - prints the numbers, (0 to 9)
 * Result: 0 (Success)
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}

	_putchar('\n');
}

