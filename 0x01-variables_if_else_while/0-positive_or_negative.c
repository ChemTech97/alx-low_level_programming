#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates random number n
 * Description: dtermines n is positive, zero, or negative
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	if else (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n)
	return (0);
}
