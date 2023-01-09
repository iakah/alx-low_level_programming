#include "main.h"
#include <stdio.h>
/**
 * main - takes argument to print name of executable
 * @argc: the totl number of arguments
 * @argv: the array arguments
 * _putchar - print function
 * Return - returns 0 (success)
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
