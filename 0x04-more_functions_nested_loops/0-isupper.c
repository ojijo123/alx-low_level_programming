#include "main.h"

/**
 * _isupper - checks for uppercase character
 *  @c: The character to be checked
 *  Return: 1 for uppercase and 0 for otherwise
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
