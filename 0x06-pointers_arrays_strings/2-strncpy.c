#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a specified number of characters from one string
 * to another
 * @dest: pointer to the destinaton of the copied string
 * @src: pointer to the string where characters will be copied
 * @n: maximum number of characters to be copied from *src
 *
 * Return: pointer to dest(result)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result;
	int i = 0;
	int size_dest = 0;

	result = dest;
	size_dest = sizeof(dest);

	for (i = 0; i < size_dest; i++)
	{
		if (dest[i] == ' ')
			dest[i] = '\0';
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (result);
}

