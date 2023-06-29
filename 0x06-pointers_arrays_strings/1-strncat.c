#include "main.h"
/**
 * _strncat - concatenate strings with a limit of n characters
 * @dest: pointer to string to append to
 * @src: pointer to string to append
 * @n: limit of characters to copy
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}

	dest++;

	for (; n > 0; n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
