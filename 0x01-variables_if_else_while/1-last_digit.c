#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main main block
 * Gat a random number and check if its last digit
 * compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %i is greater than 5\n", last);
	else if  (last == 0)
		printf("Last digit of %i is 0\n", last);
	else if (last < 6)
		printf("Last digit of %i is less than 6 and not 0\n", n, last);
	printf('\n');
	return (0);
}
