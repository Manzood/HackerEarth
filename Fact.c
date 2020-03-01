#include <stdio.h>

int main()
{
	int n, i, fact;
	scanf ("%d", &n);

	fact = 1;

	for (i = n; i > 0; i--)
	{
		fact = fact * i;
	}

	printf ("%d", fact);

	return 0;
}