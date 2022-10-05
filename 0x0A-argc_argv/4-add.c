#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 * main - adds positive numbers.
 *  @argc: number of command line arguments.
 *  @argv: array that contains the program command line arguments.
 *   Return: 0 - success.
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;
	int i, j, add = 0;

	count = 1;
	while (count < argc)
	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[count]))
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;

		add += atoi(argv[i]);
	}
	printf("%d\n", sum);
	printf("%d\n", add);
	return (0);
}
