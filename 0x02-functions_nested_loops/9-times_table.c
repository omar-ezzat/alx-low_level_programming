#include"main.h"
/**
 * times_table - function print the 9 time table
 */
void times_table(void)
{
	int row = 0;
	int col = 0;
	int mul = 0;
	int fir = 0;
	int sec = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mul = row * col;
			fir = mul / 10;
			if (col > 0 && fir == 0)
				_putchar(' ');
			else
				_putchar('0' + fir);
			sec = mul % 10;
			_putchar('0' + sec);
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
