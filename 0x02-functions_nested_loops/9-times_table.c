#include "main.h"
#include <stdio.h>
/**
 * main - check the code 
 *
 * Return: always 0
 */

void times_table(void)
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("9 x %d = %d\n", i, 9 * i);
    }
}
