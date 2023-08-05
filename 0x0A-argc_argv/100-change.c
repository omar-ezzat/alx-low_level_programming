#include <stdio.h>
#include <stdlib.h>
/**
 * main - print min num of coins
 * @argc: num of commandline
 * @argv: array of pointers
 * Return: 0-success, non-zero-fail
 */
int mian(int argc, char **argv)
{
	if (argc == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1]);
		int coins[5] = {25, 10, 5, 2, 1};
		
		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5; i++)
		{
			if (money >= coins[i])
			{
				leastcents += money / coins[i];
				money = money % coins[i];
				if (money % coins[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
