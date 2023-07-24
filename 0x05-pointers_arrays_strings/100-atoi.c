#include"main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: integer number
 */
int _atoi(char *s)
{
	int num = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num += s[i] - '0';
			num *= 10;
		}
		if (s[i] == '-')
		{
			if (num > 0)
				num *= -1;
		}
		if (s[i] == '+')
		{
			if (num < 0)
				num *= -1;
		}
	}
	return (num / 10);
}
