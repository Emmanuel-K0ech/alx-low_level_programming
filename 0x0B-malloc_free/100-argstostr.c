#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector (strings)
 *
 * Return: string on success and NULL  on failure
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;
	int len = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	ptr = malloc((sizeof(char) * len) + ac + 1);
	if (ptr == NULL)
		return (NULL);
	result = ptr;

	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}
	return (result);
}
