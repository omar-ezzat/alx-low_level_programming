#include"main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: input number
 * Return: void
 */
void print_diagonal(int n)
{
	 if (n < 1)
                _putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = -1; j < i; j++)
			{
				if(j == i-1)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
