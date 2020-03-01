#include <stdio.h>

int main()
{
    int t, n1, n, x;
    //long long num;
    scanf ("%d", &t);
    
    while (t--)
    {
        scanf ("%d", &n1);
        x = 0;
        int last = 0;
        
        while (!last && n>=0){
            if (n == 0)
                last = 1;
            n = n1%10;
            n1 = n1/10;
            if (n == 0 || n == 9 || n == 6)
                x += 6;
            else if (n == 1)
                x += 2;
            else if (n == 2 || n == 3 || n == 5)
                x += 5;
            else if (n == 7)
                x += 3;
            else if (n == 8)
                x += 7;
            else
                x += 4;
        }
        
        n = x;
        
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
}