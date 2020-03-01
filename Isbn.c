#include <stdio.h>

int main()
{
	int c, len;

	len = 0;
	int isbn = 0;

	while ((c = getchar()) != EOF)
	{
		len++;
		isbn += len*(c - '0');
	}

	if (len != 10 || (isbn % 11) != 0)
		printf ("Illegal ISBN");
	else
		printf ("Legal ISBN");

	return 0;
}