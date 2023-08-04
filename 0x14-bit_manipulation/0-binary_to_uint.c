#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary numbers
 *
 * Return: decimal (conversion result) or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result = 0;
	unsigned int len = 0;
	unsigned int temp = 0;

	len = strlen(b);
	temp = len - 1;
	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			result += (1 << (temp - i)) * (b[i] - '0');
		else
			return (0);
	}
	return (result);
}
