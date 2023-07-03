#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string being searched
 * @needle: occurrence being searched for
 *
 * Return: pointer at the begining of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
				return (haystack + j);
		}
	}
	return ('\0');
}
