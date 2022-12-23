#include "main.h"

/**
 * print_alphabet_x10 - print the alphabeth in lowercase x10
 *
 * Return 0 (Success0
 */

void print_alphabet_x10(void)
{
	int start = 97, end = 122, count = 1;

	while (count <= 10)
	{
		while (start <= end)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');

		start = 97;
		count++;
	}
}
