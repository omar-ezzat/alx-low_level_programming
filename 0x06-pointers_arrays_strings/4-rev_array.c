#include"main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
