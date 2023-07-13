#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: equivalent to dest from strncpy()
 * @s2: equivalent to src
 * @n: the number of bytes being copies from src
 *
 * Return: pointer to new string on success or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int total_len = 0;

	total_len = sizeof(s1) + sizeof(s2);
	ptr = malloc((sizeof(char) * total_len) + 1);
	if (ptr == NULL)
		return (NULL);
	strcat(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
