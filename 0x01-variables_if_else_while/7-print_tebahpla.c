#include<stdio.h>
/**
 * Main - Entry point
 * Description: "prints the lowercase alphabet in reverse"
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while ( n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar( '\n');
	return (0);
}
