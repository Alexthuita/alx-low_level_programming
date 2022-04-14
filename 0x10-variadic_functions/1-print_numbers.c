#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: separator between numbers
* @n: number of args
* @...: variable args
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int idx;
	va_list arg_ptr;

	va_start(arg_ptr, n);

	for (idx = 0; idx < (int)n; idx++)
	{
		if (idx != (int)n - 1)
		{
			printf("%d", va_arg(arg_ptr, int));

			if (separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(arg_ptr, int));
		}
	}
	printf("\n");
}
