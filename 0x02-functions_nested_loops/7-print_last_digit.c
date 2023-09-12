#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be treated
 * Return: value of the last digit of number
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;

	l = n % 10;

	if (l < 0)
		l = -l;

	_putchar(l + '0');

	return (l);
}
