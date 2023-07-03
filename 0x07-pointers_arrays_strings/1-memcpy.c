#include "main.h"
/**
 * _memcpy - copies characters from src to dest
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes we are copying
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result;
	unsigned int i;

	result = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
