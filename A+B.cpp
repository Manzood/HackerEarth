#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

//almost did it
//gave up because I thought I was being stupid and missing the point
//turns out
//I wasn't -_-

int main()
{
    int a[100];
    int b[100];
    int sum[100];
    int c;
    int pos=0;
    int ac,bc;
    
    for (int i=0;i<100;i++)
        sum[i]=0;
    
    while ((c=getchar())!=EOF)
    {
        if (c==' ')
            pos=1;
        else if (pos==0)
        {
            a[ac]=c-'0';
            ac++;
        }
        else if(pos==1)
        {
            b[bc]=c-'0';
            bc++;
        }
        ac--;bc--;
        if (c=='\n')
        {
            int j=bc;
            int i=ac;
            int len=max(i,j);
            printf("%d",len);
            for (i=ac;i>0&&j>0;i--)
            {
                sum[max(i,j)]+=a[i]+b[j];
                if (sum[max(i,j)]>9)
                {
                    sum[max(i,j)-1]+=1;
                    sum[max(i,j)]-=10;
                }
                j--;
            }
            while (i>0)
            {
                sum[i]+=a[i];
                i--;
            }
            while(j>0)
            {
                sum[j]+=b[j];
                j--;
            }
            
            for (int i=0;i<len;i++)
            {
                printf("%c",sum[i]+'0');
                sum[i]=0;
            }
            printf("\n");
            ac=0;
            bc=0;
            pos=0;
        }
    }
}