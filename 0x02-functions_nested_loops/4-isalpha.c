#include "main.h"
/**
 * _isalpha - checks for characters
 * @c: takes an integer is as parameter
 *
 * Return: 1 if c is a letter else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
