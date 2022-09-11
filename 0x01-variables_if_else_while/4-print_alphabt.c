#include<stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in lower letter
 * Return: Always 0 (Success)
 * function main - print alphabet in lower letter
 */
int main(void)
{
	char low, omit1, omit2;

	omit1 = 'q';
	omit2 = 'e';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != omit1 && low != omit2)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
