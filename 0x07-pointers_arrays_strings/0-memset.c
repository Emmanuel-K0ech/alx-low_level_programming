#include "main.h"
/**
 * _memset - fills the first n bytes of memory with char b
 * @s: pointer to the memory we are filling
 * @b: the value we are filling the memory with
 * @n: the number of bytes we are filling
 *
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
