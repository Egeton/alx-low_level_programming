#include <stdio.h>
#include <time.h>
/**
 * main -  print all the numbers of base 16 in lowercase
 * Return: 0;
*/
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
