#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: pointer to the string to append to
 * @src: pointer to the string to append
 *
 * Return: pointer to dest (concateneated string)
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
