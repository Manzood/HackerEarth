#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define MAX 1000001

bool isprime[MAX];
vector <int> fac(MAX);
vector <int> pr;
vector <int> func;

void getvec () {
	//using the sieve
	int n=MAX-1;
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for (int p=2;p*p<=n;p++) {
		if (prime[p]) {
			for (int i=p*p;i<=n;i+=p) 
				prime[i]=false;
		}
	}
	int count=0;
	for (int i=1;i<=n;i++) {
		if (prime[i]) {
			isprime[i]=true; 
			pr.push_back(i);
		}
	}
}
/*
int primes(int n) {
	int count=0;
	for (int p : pr) {
		if (n%p==0) {
			n=n/p;
			count++;
		}
		if (p>n)
			break;
	}
	return count;
}
*/
void getfac() {
	int n=MAX;
	fac[0]=0;
	fac[1]=0;
	fac[2]=1;
	for (int i=0;i<n;i++) {
		if (isprime[i]) {
			fac[i]=1;
		}
		else fac[i]=0;
	}
	for (int i=3;i<n;i++) {
		if (fac[i]==0) {
			int temp=1;
			while (i%pr[temp]!=0 && temp<pr.size()) {
				temp++;
			}
			int x=pr[temp];
			int y=x;
			while (i%x==0) {
				x*=y;
			}
			x=x/y;
			if (x<0) x=-x;
			fac[i]=fac[x]+fac[i/x];
		}
	}
}

int findmax(int start, int end) {
	int m=start;
	int val;
	for (int i=start;i<=end;i++) {
		if (i==start) {
			val=func[i];
			m=i;
		}
		else {
			if (func[i]>=val) {
				val=func[i];
				m=i;				
			}
		}
		//debug(val);
	}
	return m;
}

int main() {
	int x, n;
	cin>>x>>n;
	vector <int> a(n);
	vector <int> vals;
	//int largest=0;
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		//largest=max(a[i],largest);
	}
	getvec();
	getfac();

	for (int i=0;i<n;i++) {
		func.push_back(fac[a[i]]);
	}
	vector <int> rightmost (100,0);
	int highest=0;
	int minval=0;
	for (int i=0;i<n;i++) {
		rightmost[func[i]]=i;
		highest=max(highest,func[i]);
		if ((i-rightmost[highest])>=x) {
			//what should I do
			highest--;
		}
		if (i==x-1) {
			minval=a[rightmost[highest]];
		}
		else {
			minval=min(a[rightmost[highest]],minval);
		}
		//debug(minval);
	}
	printf("%d\n",minval);
}

//new way to find number of prime factors
//I can build an array until the largest value, using a method similar to the sieve