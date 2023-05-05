#include "main.h"
/**
 * get_endianness - should check the endianness
 *
 * Return: display 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
