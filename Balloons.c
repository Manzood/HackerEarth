#include <stdio.h>

int main()
{
	int t, i, j;
	int green, purple, num;
	int p1, p2, pl, pr;
	int sum;
	int min, max;

	scanf ("%d", &t);

	for (i = 0; i < t; i++)
	{
		sum = 0;
		pr = 0;
		pl = 0;

		scanf ("%d %d", &green, &purple);
		scanf ("%d", &num);

		if (purple>green)
		{
			max = purple;
			min = green;
		}

		else
		{
			max = green;
			min = purple;
		}

		for (j = 0; j < num; j++)
		{
			scanf ("%d %d", &p1, &p2);

			if (p1 == 1)
				pl++;

			if (p2 == 1)
				pr++;
		}

		if (pr>pl)
		{
			sum+=pr*min;
			sum+=pl*max;
		}
		else
		{
			sum+=pr*max;
			sum+=pl*min;
		}

		printf ("%d\n", sum);
	}

	return 0;
}