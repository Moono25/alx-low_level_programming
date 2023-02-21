#include <stdio>
#include <unistd.h>
/**
 * main - A program that does not use prints or puts function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
  const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  write(2, message, 59);
  return 1;
}
