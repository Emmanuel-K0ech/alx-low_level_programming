#include "main.h"
/**
 * _strncpy - copies a specified number of characters from one string
 * to another
 * @dest: pointer to the destinaton of the copied string
 * @src: pointer to the string where characters will be copied
 * @n: maximum number of characters to be copied from *src
 *
 * Return: pointer to the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (dest != (dest + n))
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
