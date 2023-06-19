#include <stdio.h>
#include <stdio.h>
/**
 * main - points the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxzABCDEFGHIJKLMNOPQRSTUVWXYZ",
	     int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
