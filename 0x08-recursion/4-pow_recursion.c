#include"main.h"
/**
 * _pow_recursion - power func.
 * @x: number
 * @y: power
 * Return: int value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
