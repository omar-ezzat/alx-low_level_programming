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
	int temp;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
