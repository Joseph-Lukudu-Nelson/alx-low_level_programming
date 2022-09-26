#include "main.h"

/**
* __memset - fills blocks with a memory bytes
* @s:address to memory block
* @n:number of bytes to be used
* @b:char to be used
* Return: pointer to the memory block
*/

char *_memset(char *s, char b, unsigned int n);
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
