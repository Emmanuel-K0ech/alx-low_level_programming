#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @c: character to be located
 *
 * Return: first occurrence of the character or NULL
 */
char *_strchr(char *s, char c)
{
	char *result;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
		s++;
	}
}
			
