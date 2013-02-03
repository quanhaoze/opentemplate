/*
 * Implement String Hash Value
 */

#include "StringHash.h"

int hashStringValue(const void *key)
{
	unsigned char *ptr = (unsigned char*)key;
	unsigned int val = 0;
	unsigned int tmp ;

	while (*ptr != '\0')
	{
		val = (val << 4) + *ptr;

		if ((tmp = (val & 0xf0000000)))
		{
			val = val ^ (tmp >> 24);
			val = val ^ tmp;
		}

		ptr++;

	}
	return val;
}
