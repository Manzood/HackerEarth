#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int min,pos;
        vector<int>C(n);
        vector<int>L(n);
        cin>>min;
        c[0]=min;
        pos=0;
        for (int i=1;i<n;i++)
       	{
       		scanf("%d",C[i]);
       		if (c[i]<min)
       		{
       			min=c[i];
       			pos=i;
       		}
       	}
       	for (int i=0;i<n;i++)
       		scanf("%d",L[i]);
       	for (int i=0;i<pos;i++)
    }
}