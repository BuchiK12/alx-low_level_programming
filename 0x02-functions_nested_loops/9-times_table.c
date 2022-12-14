#include "main.h"

/**
 * times_table - print the 9 times table
 * Return: Always 0 (Success0
 */

void times_table(void)
{
	int s = 0, e = 9, count = 0;


	while (count <= 9)
	{
		while (s <= e)
	{
		int p = count * s;

		if (s != 0)
		{
			_putchar(',');
			if (p < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
		}
		if (p < 10)
			_putchar(p + '0');
		else
		{
			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
		}
		if (s == e)
			_putchar('\n');
		s++;
	}
	s = 0;
	count++;
	}
}
