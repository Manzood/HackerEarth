#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define MOD (int)(1e9+7)

int main() {
	int t;
	cin>>t;
	while (t--) {
		long long n, k, p;
		scanf("%lld%lld%lld",&n,&k,&p);
		long long ans=1;
		p++;
		int pow=(n/p);
		for (int i=0;i<pow;i++) {
			ans*=p;
			ans=ans%MOD;
		}
		for (int i=0;i<n/2;i++) {
			ans*=2;
		}
		ans+=(n%(p+1));
		ans*=k;
		ans=ans%MOD;
		printf("%lld\n",ans);
	}
}








		//you must paint at least (n-p+1 columns)
