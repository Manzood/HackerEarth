#include <stdio.h>

int main()
{
	int c, dig1, dig2;
	int flag = 0;

	c = getchar();
	dig1 = c - '0';

	c = getchar();
	dig2 = c - '0';

	if (((dig1 + dig2)%2) != 0)
		flag = 1;

	//printf ("%d\n", flag);

	if ((c = getchar()) == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
		flag = 1;

	//printf ("%d\n", flag);

	c = getchar();
	dig1 = c - '0';

	c = getchar();
	dig2 = c - '0';
	
	if (((dig1 + dig2)%2) != 0)
		flag = 1;

	//printf ("%d\n", flag);

	dig1 = dig2;

	c = getchar();
	dig2 = c - '0';

	if (((dig1 + dig2)%2) != 0)
		flag = 1;

	//printf ("%d\n", flag);

	if ((c = getchar()) != '-')
		flag = 1;

	//printf ("%d\n", flag);

	c = getchar();
	dig1 = c - '0';

	c = getchar();
	dig2 = c - '0';

	if (((dig1 + dig2)%2) != 0)
		flag = 1;

	//printf ("%d\n", flag);

	if (flag == 0)
		printf ("valid");

	else
		printf ("invalid");

	return 0;
}