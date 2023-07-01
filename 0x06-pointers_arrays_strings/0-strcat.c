#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: pointer to the string to append to
 * @src: pointer to the string to append
 *
 * Return: result (pointer to dest)
 */
char *_strcat(char *dest, char *src)
{
	/* initializing *result to keep track of array address */
	char *result;

	result = dest;
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

	return (result);
}
