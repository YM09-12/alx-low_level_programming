#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints alphabet in lowercase
  * Return: Alwaya (Success)
  */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}

		putchar ('\n');

		return (0);
}