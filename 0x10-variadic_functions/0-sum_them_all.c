#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - returns sum of parameters
 * @n: number of parameters passed
 * @...: variable number of parameters to calculate sum of
 * Return: sum of all parameters, but if n == 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i, sum = 0;

	va_start(pa, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);

	va_end(pa);

	return (sum);
}
