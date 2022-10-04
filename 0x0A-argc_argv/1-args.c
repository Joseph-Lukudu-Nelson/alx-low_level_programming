#include <stdio.h>
#include "main.h"

/**
 * main - print the number of all arguments it recieves
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
