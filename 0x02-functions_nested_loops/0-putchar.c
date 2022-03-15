#include "main.h"
/**
* main - prints _putchar, followed by a new line.
*
* Return: 0 (Success)
*/

int main(void)
{
	char *_putchar;

	for (_putchar = "_putchar\n"; *_putchar != '\0'; ++_putchar)
		_putchar(*_putchar);
	return (0);
}
