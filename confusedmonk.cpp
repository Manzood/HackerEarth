#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define MOD (int)(1e9+7)

int main() {
	int n;
	cin>>n;
	vector <int> a(n);
	int g;
	long long fx=1;
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		fx*=a[i];
		fx%=MOD;
		if (i==0) g=a[i];
		else g=__gcd(a[i],g);
	}
	for (int i=1;i<g;i++) {
		//debug(fx);
		fx*=fx;
		fx%=MOD;
	}
	printf("%lld",fx);
}
