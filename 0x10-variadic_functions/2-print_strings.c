#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @seoarator - string
 * @n: number
 * @...: strings 
 * Return: void
 */
void prints_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%S%S", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
