#include <stdlib.h>
#include <string.h>
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
	int size = 0;

	size = strlen(str);
	
	ptr = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	while (i < sizeof(str))
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
