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
	char *result = dest;
	int i;

	if (src[0] == '\0')
		return (result);
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}
	return (result);
}
