#include "main.h"

/**
 * print_most_numbers : it prints numbers from 0 to 9 followed by a new line
 * _putchar: only use _putchar to print
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	int i = 0;

	for(;i < 9; i++)
		_putchar(i);
	_putchar(\n);
}
