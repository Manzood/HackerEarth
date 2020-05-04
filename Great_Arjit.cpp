#include<cstdio>
#include<algorithm>
#include<set>
#include<vector>
#include<iostream>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define MOD (int)(1e9+7)

//This solution does not work because I do not even know what an inverse multiplicative modulus is (yet);
long long modinverse (long long n) {
	long long result=1;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		scanf("%d",&n);
		vector <long long> a(n);
		for (int i=0;i<n;i++) {
			scanf("%lld",&a[i]);
			a[i]=modinverse(a[i]);
		}
		for (int i=n-1;i>=1;i--) {
			a[i]=a[i]/a[i-1];
		}
		long long f=0;
		for (int i=1;i<n;i++) {
			f+=(long long)((a[i]*(a[i]+1))/2);
			f=f%MOD;
		}
		f=(f*(f+1))/2;
		f=f%MOD;
		printf("%lld\n",f);
	}
}
