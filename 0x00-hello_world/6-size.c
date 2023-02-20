#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
    printf("The size of a char is %zu byte(s)\n", sizeof(char));
    printf("The size of a short is %zu byte(s)\n", sizeof(short));
    printf("The size of an int is %zu byte(s)\n", sizeof(int));
    printf("The size of a long is %zu byte(s)\n", sizeof(long));
    printf("The size of a long long is %zu byte(s)\n", sizeof(long long));
    printf("The size of a float is %zu byte(s)\n", sizeof(float));
    printf("The size of a double is %zu byte(s)\n", sizeof(double));
    printf("The size of a long double is %zu byte(s)\n", sizeof(long double));
    return 0;
}
