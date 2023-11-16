#include "main.h"

int main(void)
{
	sum();
	return 0;
}

/**
 * sum - function that sum two numbers
 *
 * Return: sum of a and b
 */
int sum(void)
{
	int a = 10;
	int b = 10;
	int output = a + b;

	printf("%d\n", output);
	return (output);
}
