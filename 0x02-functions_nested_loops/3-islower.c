#include "main.h"
/**
 * _islower - checks for lowercaser characters
 *@c: parameter passed to the function
 *
 * Return: 1 c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
