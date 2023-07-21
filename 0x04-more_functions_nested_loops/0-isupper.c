#include"main.h"
/**
 * _isupper - check if c is upper
 *
 * @c: input alphabet
 *
 * Return: 1 if the uppercase. 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
