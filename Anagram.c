#include <stdio.h>
#include <string.h>

int main()
{
	int t, i;
	char s1[100000], s2[100000];
	int a[26], b[26];
	int diff;
	int ans;

	scanf ("%d", &t);
	//getchar();

	while (t--)
	{
		ans = 0;

		scanf ("%s %s", &s1, &s2);

		memset (&a[0], 0, 26*sizeof(a[0]));
		memset (&b[0], 0, 26*sizeof(b[0]));

		i = 0;

		while (s1[i] != '\0')
		{
			a[s1[i] - 'a']++;
			i++;
		}

		i = 0;

		while (s2[i] != '\0')
		{
			b[s2[i] - 'a']++;
			i++;
		}

		for (i = 0; i < 26; i++)
		{
			diff = a[i] - b[i];

			if (diff < 0)
				ans -= diff;

			else
				ans += diff;
		}

		printf ("%d\n", ans);
	}

	return 0;
}