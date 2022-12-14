#include <stdio.h>
#include <main.h>
/**
 * print _putchar
 */

int _putchar(char c)
{
	return(write(&c));
}

int main()
{
	_putchar("_putchar");


	return 0;
}
