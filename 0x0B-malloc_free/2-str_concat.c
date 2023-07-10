#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on falure and pointer to new memory on success
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char *result;
	int len = 0;

	len = strlen(s1);
	len += strlen(s2);
	ptr = malloc((sizeof(char) * (len - 2)) + 1);
	result = ptr;

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcat(ptr, s1);
	strcat(ptr, s2);
	return (result);
}
