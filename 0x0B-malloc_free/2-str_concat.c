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

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	if (s2 == NULL)
	{
		ptr = malloc(sizeof(char) * (strlen(s1)));
		ptr = s1;
		return (ptr);
	}
	if (s1 == NULL)
	{
		ptr = malloc(sizeof(char) * (strlen(s2)));
		ptr = s2;
		return (ptr);
	}

	len = strlen(s1);
	len += strlen(s2);
	ptr = malloc((sizeof(char) * len) + 1);
	result = ptr;
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcat(ptr, s1);
		strcat(ptr, s2);
	}
	return (result);
}
