#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		*s++;
	}
	return (i);
}
