#include<stdio.h>
#include<unistd.h>
/**
 *main - entry point
 *
 *Description: print in other method write(int fd,const void *buf,size_t count)
 *
 *Return: 1 (not succss)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
