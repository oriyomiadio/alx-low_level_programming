#include "main.h"

/**
 * _islower - check if parameter is lowerxase
 * @c: parameter character to be passed in
 *
 * Return: 1 if it lowercase 0 if it Not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
