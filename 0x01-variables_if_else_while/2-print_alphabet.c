#include <stdio.h>

/**
 * main - print alpha in lower case
 * Return: Always 0
 */

int main(void)
{
	char (lc);

	for (lc = 'a';)
       	(lc <= 'z';)
       	(lc++;)
	{
		putchar(lc);
	}

	putchar("lc\n");

	return (0);
}
