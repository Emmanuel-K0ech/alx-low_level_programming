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

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	ptr = malloc((sizeof(char) * size) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < ((sizeof(char) * size) + 1))
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
