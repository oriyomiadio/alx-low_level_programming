#include "main.h"

/**
 * _isalpha - check if c is a letter
 * @c: parameter for c
 *
 * Return: 1 if C is letter 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
