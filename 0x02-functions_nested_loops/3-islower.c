#include "main.h"
/**
 * _islower - check if char is lower
 * @c: Is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
