#include <stdio.h>

int main()
{
	int c, count;
	count = 0;

	while ((c = getchar()) != '\n')
	{
		count++;
	} 

	printf("%d", count);
}