#include <stdio.h>

int main()
{
	int t, i, j, k;
	scanf ("%d", &t);
	int n[1000];

	for (i = 0 ; i < t; i++)
	{
		scanf ("%d", &n[i]);
	}

	for (k = 0; k < t; k++)
	{
		for (i = 0; i < n[k]; i++)
		{
			for (j = 0; j < (n[k]*2); j++)
			{
				if ((j>i) && (j < (((2*n[k])-i) - 1)))
				{
					printf ("#");
				}

				else
					printf("*");
			}

			printf ("\n");
		}

		printf ("\n");
	}

	return 0;
}