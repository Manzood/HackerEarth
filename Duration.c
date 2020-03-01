#include <stdio.h>

int main()
{
	int n;
	int sh, sm, eh, em, dm, dh;

	scanf ("%d", &n);

	while (n--)
	{
		scanf ("%d %d %d %d", &sh, &sm, &eh, &em);

		if (sm>em)
		{
			dm = 60 - (sm - em);
			dh = eh - sh - 1;
		}

		else 
		{
			dm = em - sm;
			dh = eh - sh;
		}

		printf ("%d %d\n", dh, dm);
	}

	return 0;
}