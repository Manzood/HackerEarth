#include <stdio.h>

int main()
{
	int n, i, j;
	scanf ("%d", &n);
	i = 2;
	int prime = 0;

	while (i < n)
	{
		for (j = 2; (j*j) <= i; j++)
		{
			if ((i%j) == 0)
			{
				prime++;
			}
		}

		if (prime == 0)
			printf ("%d ", i);

		else
			prime = 0;

		i++;
	}
}