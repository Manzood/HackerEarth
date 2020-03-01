#include <stdio.h>

int main()
{
	int c, i;
	int a[100];
	int len;
	int test = 0;

	i = 0;

	while ((c = getchar()) != EOF)
	{
		a[i] = c;
		i++;
	}

	len = i;

	for (i = 0; i < len && test == 0; i++)
	{
		if (a[i] != a[len - (i + 1)])
			test = 1;
	}

	if (test == 0)
		printf ("YES");

	else
		printf ("NO");
}