#include<stdio.h>
#include<unistd.h>
/**
 *mian - entry point
 *
 *Description: print in other method
 *
 *Return: 0 succss
*/
int main(void)
{
	write(2 , "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n" , 59);
	return (1);
}
