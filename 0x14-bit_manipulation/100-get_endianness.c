/**
 * get_endianness - check for endianness
 *
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;

	return (*((char *)&num) + '0');
}
