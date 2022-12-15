#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	char digit = '0';
	int isdigit = 0;

	for (; digit <= '9'; digit++)
	{
		if(c == digit)
		{
			isdigit = 1;
		}
	}
	return (isdigit);
}
