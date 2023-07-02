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
	char *result;
	int flag;

	result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		if (flag == n)
		{
			*dest = *src;
			break;
		}
		else
		{
			*dest = *src;
			dest++;
			src++;
		}
		flag++;
	}
	*dest = '\0';
	return (result);
}
