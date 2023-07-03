#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a specified number of characters from one string
 * to another
 * @dest: pointer to the destinaton of the copied string
 * @src: pointer to the string where characters will be copied
 * @n: maximum number of characters to be copied from *src
 *
 * Return: pointer to dest(result)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result;
	int len_src;
	int flag;

	/* finding length of string to compare with n */
	len_src = strlen(src);
	flag = 0;
	result = dest;

	/* seperate n < strlen(src) and n > strlen(src) scenarios */
	if (n > len_src)
	{
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
			flag++;
		}

		while (flag < n)
		{
			*dest = '\0';
			dest++;
			flag++;
		}
	}
	else
	{
		while (flag < n)
		{
			*dest = *src;
			src++;
			dest++;
			flag++;
		}
		*dest = '\0';

	}
	return (result);
}
