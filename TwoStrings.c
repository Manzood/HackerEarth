#include <stdio.h>
#include <string.h>

int main()
{
	int t, i;
	char s1[100000], s2[100000];
	int a1[26], a2[26];
	int flag;
	int l1, l2;

	scanf ("%d", &t);

	while (t--)
	{
		scanf("%s %s", &s1, &s2);

		memset(&a1[0], 0, 26*sizeof(a1[0]));
		memset(&a2[0], 0, 26*sizeof(a2[0]));

		flag = 0;
		i = 0;

		l1 = strlen(s1);
		l2 = strlen(s2);

		for (i = 0; i < l1; i++)
		{
			a1[s1[i] - 'a']++;
		}

		for (i = 0; i < l2; i++)
		{
			a2[s2[i] - 'a']++;
		}

		for (i = 0; i < 26; i++)
		{
			if (a1[i] != a2[i])
				flag = 1;
		}

		if (flag == 1)
			printf ("NO\n");
		else
			printf ("YES\n");
	}
}