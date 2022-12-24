#include "main.h"

/**
 * _islower - check whether character passed is lowercase
 *
 * @c: character to be tested
 *
 * Return: 1 @c is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 9 && c <= 122)
		return (1);
	else
		return (0);
}
