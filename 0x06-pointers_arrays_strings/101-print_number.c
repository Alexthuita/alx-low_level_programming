#include "main.h"


/**
 * print_number - Print integer
 * @n:integer to print
 */
void print_number(int n)
{
	int k, l;

	k = 1;
	l = n;
	if (n < 0)
	{
		k = k * -1;
		_putchar('-');
	}
	while (l > 9 || l < -9)
	{
		l = l / 10;
		k = k * 10;
	}

	while (k > 9 || k < -9)
	{
		_putchar((n / k) % 10 + '0');
		k = k / 10;
	}
	if (n < 0)
		_putchar((n % 10) * -1 + '0');
	else
		_putchar(n % 10 + '0');
}
