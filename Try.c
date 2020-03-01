#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
 
int main()
{
 	int i = 0;
 	while(i < 40)
 	{
 		//printf("\n\nStarting:::");
 		usleep(199900);
 		system("clear");
 		printf("\n\nLoading \\");
 		usleep(199900);
 		system("clear");
 		printf("\n\nLoading |");
 		usleep(199900);
 		system("clear");
 		printf("\n\nLoading /");
 		usleep(199900);
 		system("clear");
 		printf("\n\nLoading -");
 		usleep(199900);
 		i++;
 	}
 
 system("clear");
 printf("\n");
}