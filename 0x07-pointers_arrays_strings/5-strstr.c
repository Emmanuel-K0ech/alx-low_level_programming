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

	j = 0;

	for (i = 0; haystack[i] >= '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] >= '\0')
			{
				if (haystack[i + j] != needle[j] || needle[j] == '\0')
					break;
				j++;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
