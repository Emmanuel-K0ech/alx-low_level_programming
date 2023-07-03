#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: points to string to be searched
 * @accept: charactert to check if present in @s
 *
 * Return: pointer to byte in s that matches @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[i])
				return ((s + i) - 1);
		}
	}
	return ('\0');
}
