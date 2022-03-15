#include "main.h"

/**
 * main - Print "_putchar"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char name_of_string[] = "_putchar";

	while (i < 8)
	{
		_putchar(name_of_string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
