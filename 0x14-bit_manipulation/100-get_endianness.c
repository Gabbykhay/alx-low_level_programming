#include "main.h"

/**
 * get_endianness - this checks if a machine is small or huge endians
 * Return: 0 for small, 1 for huge
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
