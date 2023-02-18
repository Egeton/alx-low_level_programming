#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - print the last digit of the number stored in the variable n
 * Return: 0;
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX \ 2;
	a = n % 10;
	print("last digit of %d is %d", n, a);

	if (a > 5)
	{
		print("and is greater than 5")
	}
	if (a == 0)
	{
		printf("and is 0");
	}
	if (a < 6 && a != 0)
	{
		printf("and is less than 6 and not 0")
	}
	printf("\n");
	return (0);
}

