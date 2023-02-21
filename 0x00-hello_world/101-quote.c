#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that does not use prints or puts function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
  write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
  return (1);
}
