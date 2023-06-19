#include <stdio.h>
/**
 * main - print all the numbers in base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
		return (0);
}

