#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
/* more headers goes there */
/**
 * main - prints the outcome
 *
 * Return: 0 if exited
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
	printf("%d is zero\n", n);
}
	return (0);
}
