//Can be used to test solutions of multiple problems
#include<bits/stdc++.h>
using namespace std;

int rand(int a, int b) {
	return a + rand() % (b-a+1);
}
int rand(long long a, long long b) {
	return a + rand() % (b-a+1);
}

int main(int argc, char *argv[])
{
	srand(atoi(argv[1]));
	int n=rand(1,10);
	printf("%d\n",n);
	set <int> used;
	for (int i=0;i<n;i++) {
		int x;
		do {
			x=rand(1,100);
		} while(used.count(x));
		used.insert(x);
		printf("%d ",x);
	}
	int q=rand(1,10);
	printf("\n%d\n",q);
	for (int i=0;i<q;i++) {
		long long t; int m;
		do {
			t=rand(1LL,100000000000000LL);
			m=rand(1,n+3);
		} while (used.count(t));
		used.insert(t);
		printf("%lld %d\n",t,m);
	}
	puts("");
}