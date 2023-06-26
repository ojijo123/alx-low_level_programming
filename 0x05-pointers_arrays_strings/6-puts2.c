#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * @str: inputs
 * Return: print string
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *i = s;
	int o;

	while (*i != '\0')
	{
		i++;
		longi++;
	}
	t = longi = 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
