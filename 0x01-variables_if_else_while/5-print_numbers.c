#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints all single digit numbers of base 10 from 0
  * Return: Always (Success)
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}

	putchar ('\n');

	return (0);
}
