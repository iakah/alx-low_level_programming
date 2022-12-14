#include "holberton.h"

/**
 * print_times_table - prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, k;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			k = n * i;

			if ((k / 10) == 0)
			{
				if (i != 0)
					_putchar(' ');
				_putchar(k + '0');

				if (i == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (i == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
