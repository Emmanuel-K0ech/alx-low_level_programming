#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: NULL if str == NULL, returns pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(*str));

	if (str == NULL)
		return (NULL);

	while (i < sizeof(str))
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
