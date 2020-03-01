#include <stdio.h>

int main()
{
    int t, n;
    //long long num;
    scanf ("%d", &t);
    
    while (t--)
    {
        scanf ("%d", &n);
        if (n == 0 || n == 9 || n == 6)
            n = 6;
        else if (n == 1)
            n = 2;
        else if (n == 2 || n == 3 || n == 5)
            n = 5;
        else if (n == 7)
            n = 3;
        else if (n == 8)
            n = 7;
            
        printf ("%d\n", n);
            
        if ((n%2) == 0)
        {
            printf ("%d", 1);
            n-=2;
        }
        else
        {
            printf ("%d", 7);
            n-=3;
        }
        
        while (n>0)
        {
            n-=2;
            printf ("%d", 1);
        }
        
        printf ("\n");
    }