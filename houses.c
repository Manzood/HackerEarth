#include <stdio.h>

int main()
{
    int n, c, a[20], i;
    
    scanf ("%d", &n);
    
    int len = 0;
    int test = 1;
    
    getchar();
    
    while (n--)
    {
        c = getchar();
    
        //printf("%d", n);
        //printf("%c", c);
        
        if (c == '.')
        {
            a[len] = 'B';
            test = 0;
        }
           
        else
            a[len] = c;
            
        len++;
    }
    
    if (test)
        printf ("NO\n");
        
    else
    {
        printf ("YES\n");
        
        for (i = 0; i < len; i++)
        {
            printf("%c", a[i]);
        }
    }
    
    return 0;
}