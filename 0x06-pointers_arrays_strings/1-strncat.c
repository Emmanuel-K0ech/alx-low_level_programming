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
	flag = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (flag < n)
	{
		if (*src == '\0')
		{
			break;
		}
		*dest = *src;
		src++;
		dest++;
		flag++;
	}
	*dest = '\0';
	return (result);
}
