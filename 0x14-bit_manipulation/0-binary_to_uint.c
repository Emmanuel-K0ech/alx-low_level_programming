#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * binary_to_uint - converts binary value to unsigned int
 * @b: string of 1s and 0s
 *
 * Return: converted number of 0 if string has other chars or is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int strb_len = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	strb_len = strlen(b);
	while (*b != '\0')
	{
		if ((*b != '1') && (*b != '0'))
			return (0);
		if (*b == '1')
			result += 1 << (strb_len - i - 1);
		i++;
		b++;
	}
	return (result);
}
