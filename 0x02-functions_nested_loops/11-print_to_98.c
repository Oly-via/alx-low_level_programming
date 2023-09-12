#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: number to start printing from
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	int y, z;

	if (n <= 98)
	{
		for (y = n; y <= 98; y++)
		{
			if (y != 98)
				printf("%d, ", y);
			else if (y == 98)
				printf("%d\n", y);
		}
	} else if (n >= 98)
	{
		for (z = n; z >= 98; z--)
		{
			if (z != 98)
				printf("%d, ", z);
			else if (z == 98)
				printf("%d\n", z);
		}
	}
}
