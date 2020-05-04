#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	cin>>n;
	unordered_map <int, int> mp;
	vector <int> a(n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		mp[a[i]]++;
	}
	long long sum=0;
	for (auto &m:mp) {
		if (m.second%2==0) {
			sum+=m.first;
		}
	}
	printf("%lld\n",sum);
}