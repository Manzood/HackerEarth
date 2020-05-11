#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n,q;
	scanf("%d",&n);
	vector <int> a(n);
	vector <int> odd;
	vector <int> even;
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if (i%2==0) odd.push_back(a[i]);
		else even.push_back(a[i]);
	}
	scanf("%d",&q);
	for (int i=0;i<q;i++) {
		long long t;
		int m;
		scanf("%lld %d",&t,&m);
		m-=1;
		t=t%(2*n);
		if (t<=n) {
			//disappearing odd first
			if (t<=odd.size()) {
				//odd disappearing
				//find first odd
				if (m>=(n-t))
					printf("-1\n");
				else if (m<t) {															//check condition
					//must be even
					printf("%d\n",even[m]);
				}
				else {
					m-=t;
					if (m%2==0) {
						m/=2;
						printf("%d\n",odd[m+t]);
					}
					else {
						m/=2;
						printf("%d\n",even[m+t]);
					}	
				}
			}
			else {
				//even disappearing
				t-=odd.size();
				if (m>=(even.size()-t)) {
					printf("-1\n");
				}
				else {
					//possible
					printf("%d\n",even[m+t]);
				}
			}
		}
		else {
			//reappearing
			//odd first
			t-=n;
			if (t<=odd.size()) {
				//odd
				if (m>=t) {
					printf("-1\n");
				}
				else {
					printf("%d\n",odd[m]);
				}
			}
			else {
				//could be both
				t-=odd.size();
				if (m>=(t+odd.size())) {
					printf("-1\n");
				}
				else {
					//checking how many of the even numbers are appearing
					if (m<=2*t) {
						if (m%2==0) {
							//odd
							m=m/2;
							printf("%d\n",odd[m]);
						}
						else {
							m=m/2;
							printf("%d\n",even[m]);
						}
					}
					else {
						//odd
						m-=t;
						printf("%d\n",odd[m]);
					}
				}
			}
		}
	}
}