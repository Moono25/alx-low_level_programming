#include<stdio.h>
/**
 * Main - Entry point
 * Discription: "When I was having that alphabet soup, I never thought that it would pay off"
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{	
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	return (0);
}
