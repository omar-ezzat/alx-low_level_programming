#include"main.h"
/**
 * _islower - function to check if character is lower case
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lower case
 * return 0 if not
 */
int _islower(int c)
{
	if(c >= 'a' && c<= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
