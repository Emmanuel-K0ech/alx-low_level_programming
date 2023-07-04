#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string to check across
 * @accept: character being counted in bytes
 *
 * Return: unsigned int representing the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int flag = 0;
	unsigned int flag2 = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				flag++;
		}

		if (flag2 < flag)
			flag2++;
		else
			break;
	}
	return (flag2);
}
