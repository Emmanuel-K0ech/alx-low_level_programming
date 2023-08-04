#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary numbers
 *
 * Return: decimal (conversion result) or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;
	unsigned int len = 0;

	len = strlen(b);
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			result += pow(2, (len - i)) * b[i];
		else
			return (0);
	}
	return (result);
}
