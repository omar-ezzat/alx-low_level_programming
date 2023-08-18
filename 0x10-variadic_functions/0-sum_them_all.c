#include "variadic_functions.h"
/**
 * sum_them_all - sum variadic
 * @n: args numb
 * @...: the integers
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	av_end(ap);
	return (s);
}
