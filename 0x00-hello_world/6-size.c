#include<stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 *
 * Return: 0 (Success)
 */
int main(void)
{
       printf("The size of a char: %d byte(s)\n", sizeof(char));
       printf("The size of a short: %d byte(s)\n", sizeof(short));
       printf("The size of an int: %d byte(s)\n", sizeof(int));
       printf("The size of a long: %d byte(s)\n", sizeof(long));
       printf("The size of a long long: %d byte(s)\n", sizeof(long long));
       printf("The size of a float: %d byte(s)\n", sizeof(float));
       return (0);
}
