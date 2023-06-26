#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int i;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s ==;
	for (i = longi; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
