#include<stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet in lower letter and capital letter
 * Return: Always 0 (Success)
 * function main - print alphabet in lower letter
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
