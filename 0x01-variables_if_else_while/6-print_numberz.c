#include <stdio.h>
/**
 * Main - Entry
 * Discription: "print base 10 digits  using the putchar function"
 * Return: always 0
 */
int main(void)
{
	int n;

	for(n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar ('\n');
	return (0);
}
