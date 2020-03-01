#include <stdio.h>

int main()
{
	int c;
	int locx = 0;
	int locy = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == 'U')
			locy++;
		else if (c == 'D')
			locy--;
		else if (c == 'R')
			locx++;
		else if (c == 'L')
			locx--;
	}

	printf("%d %d", locx, locy);

	return 0;
}