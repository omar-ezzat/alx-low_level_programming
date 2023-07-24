#include"main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: integer number
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num += s[i] - '0';
			num *= 10;
		}
		else 
		{
			break;
		}
		if (s[i] == '-')
		{
			if (sign >= 0)
				sgin *= -1;
		}
		if (s[i] == '+')
		{
			if (sign < 0)
				sgin *= -1;
		}
	}
	return (num / 10 * sgin);
}
