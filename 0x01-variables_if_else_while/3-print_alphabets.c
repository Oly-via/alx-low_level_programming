#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase and then an uppercase
 * Return: 0
 */
int main(void)
{
char c;

char d;

c = 'a';
d = 'A';
while
	(c <= 'z') {
		putchar(c);
		c++;
	}
while
	(d <= 'Z') {
		putchar(d);
		d++;
	}
putchar('\n');
return (0);
}
