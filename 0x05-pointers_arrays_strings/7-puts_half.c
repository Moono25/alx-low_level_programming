#include "main.h"
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str) 
{
	int length = strlen(str);
	
	int i;

	if (length % 2 == 0)
	{
	    for (i = length/2; i < length; i++)
	    {
		    printf("%c", str[i]);
	    }
	}
    else
    {
	    for (i = (length-1)/2; i < length; i++) 
	{
		printf("%c", str[i]);
        }
    }
    printf("\n");
}
