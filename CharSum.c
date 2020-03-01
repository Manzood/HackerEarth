#include <stdio.h>

int main()
{
	int c, sum;

	sum = 0;

	while ((c = getchar()) != EOF)
	{
		sum+= c - 'a' + 1;
	}

	printf ("%d", sum);
}