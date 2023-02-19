#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */

int main(void)
{
	char ch;
	for ((char)ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for ((char)ch = "A"; ch <= "Z"; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
