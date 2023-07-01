#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: pointer to the string to append to
 * @src: pointer to the string to append
 *
 * Return: dest (concateneated string)
 */
char *_strcat(char *dest, char *src)
{
	/* moving to the end of the destination string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* copying the src strng to dest string, overwriting null byte */
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	/* add a null byte at the end of concatenated string */
	*dest = '\0';

	return (dest);
}
