#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints lowercase alphabet in reverse
  * Return: Always (Success)
  */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
