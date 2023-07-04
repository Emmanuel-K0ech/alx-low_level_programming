#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to search throught
 * @c: character to be located
 *
 * Return: first occurrence of the character or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
