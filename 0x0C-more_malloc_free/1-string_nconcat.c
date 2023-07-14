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

	if (s1 == NULL && s2 == NULL)
		retrun (NULL);
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	total_len = strlen(s1) + strlen(s2) + 2;
	ptr = malloc((sizeof(char) * total_len) + 1);
	if (ptr == NULL)
		return (NULL);
	*ptr = '\0';
	strcat(ptr, s1);
	if (n >= strlen(s2))
		strcat(ptr, s2);
	else
		strncat(ptr, s2, n);
	return (ptr);
}
