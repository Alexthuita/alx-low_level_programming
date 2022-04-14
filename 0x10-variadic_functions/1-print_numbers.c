#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: number of integers
* @...: list of integers
* Return: sum of integers
*/


int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int idx;
	va_list arg_pointer;

	va_start(arg_pointer, n);

	for (idx = 0; idx < (int)n; idx++)
		sum += va_arg(arg_pointer, int);

	va_end(arg_pointer);
	return (sum);
}
