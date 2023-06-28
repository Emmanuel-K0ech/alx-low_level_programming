#include "main.h"
/**
 * _strcpy - copies a string from one destination to another using pointers
 * @src: pointer to string being copied
 * @dest: pointer to destination of copy
 *
 * Return: @dest(pointer to destination)
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (*src != '\0')
	{
		i++;
		src++;
	}

	for (j = 0; j < i; j++)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (dest);
}
