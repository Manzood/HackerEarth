#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	cin>>n;
	vector <int> a(n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int q;
	cin>>q;
	for (int i=0;i<q;i++) {
		long long t;
		int m;
		scanf("%lld %d",&t,&m);
		t=t%(2*n);
		bool odd=true;
		bool deleting=true;
		vector <int> temp=a;
		int next=0;
		int oddcount=(n/2)+(n%2);
		int evencount=n-oddcount;
		for (int j=0;j<t;j++) {
			if (deleting==true) {
				if (odd==true) {
					temp.erase(temp.begin()+next);
					next++;
				}
				else if (odd==false) {
					temp.erase(temp.begin());
				}
				if (temp.size()==evencount) {
					odd=false;
					next=0;
				}
				if (temp.size()==0) {
					deleting=false;
					odd=true;
					next=0;
				}
			}
			else {
				if (odd==true) {
					temp.push_back(a[next]);
					next+=2;
				}
				if (odd==false) {
					temp.insert(temp.begin()+next,a[next]);
					next+=2;
				}
				if (temp.size()==oddcount) {
					odd=false;
					next=1;
				}
				if (temp.size()==a.size()) {
					deleting=true;
					odd=true;
					next=0;
				}
			}
		}
		if (m>temp.size()) printf("-1\n");
		else printf("%d\n",temp[m-1]);
	}
}

