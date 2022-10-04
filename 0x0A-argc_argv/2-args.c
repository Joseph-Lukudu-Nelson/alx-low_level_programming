#include <stdio.h>
#include "main.h"

/**
 * main - print the number of all arguments it recieves
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
