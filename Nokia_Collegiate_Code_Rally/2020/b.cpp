#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int t;
	cin>>t;
	while (t--) {
		string s;
		unordered_map <char, int> mp;
		cin>>s;
		for (int i=0;i<s.size();i++) {
			mp[s[i]]++;
		}
		set <char> used;
		for (int i=0;i<s.size();i++) {
			if (used.count(s[i])==0) {
				used.insert(s[i]);
				printf("%c",s[i]);
				printf("%d",mp[s[i]]);
			}
		}
		printf("\n");
	}
}