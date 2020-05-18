#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fileIO freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define endl "\n"

#define int long long
const int mod = 1e9 + 7;

int n, k, p;

const int maxN = 301;
const int maxM = 1000;
int dp[maxN][maxM][4][6];

int solve() {

	memset(dp, 0, sizeof(dp));

	cin >> n >> k >> p;

	int maxLimit = (n / 2 * 2 + n / 2 + n % 2 * 2);
	if (k > maxLimit) {
		// cout << "here" << endl;
		return 0;
	}


	dp[0][1][0][1] = dp[0][1][0][2] = dp[0][1][0][3] = dp[0][2][0][4] = dp[0][0][1][5] = 1;
	for (int i = 1; i < n; ++i) {
	for (int j = 0; j <= k; ++j) {
	int a1 = 0, a2 = 0;

	for (int z = 1; z < p; ++z) {
if ((j - 1) >= 0)
a1 += dp[i - 1][j - 1][z][5];
if ((j - 2) >= 0)
a2 += dp[i - 1][j - 2][z][5];
}

dp[i][j][0][1] = a1 + ((j - 1) >= 0 ? dp[i - 1][j - 1][0][2] + dp[i - 1][j - 1][0][3] : 0);
dp[i][j][0][1] %= mod;

dp[i][j][0][2] = a1 + ((j - 1) >= 0 ? dp[i - 1][j - 1][0][1] + dp[i - 1][j - 1][0][3] + dp[i - 1][j - 1][0][4] : 0);
dp[i][j][0][2] %= mod;

dp[i][j][0][3] = a1 + ((j - 1) >= 0 ? dp[i - 1][j - 1][0][1] + dp[i - 1][j - 1][0][2] : 0);
dp[i][j][0][3] %= mod;

dp[i][j][0][4] = a2 + ((j - 2) >= 0 ? dp[i - 1][j - 2][0][2] : 0);
dp[i][j][0][4] %= mod;

dp[i][j][1][5] = (j >= 0 ? dp[i - 1][j][0][1] + dp[i - 1][j][0][2] + dp[i - 1][j][0][3] + dp[i - 1][j][0][4] : 0);
dp[i][j][1][5] %= mod;


dp[i][j][2][5] = dp[i - 1][j][1][5];
}

}

int ans = dp[n - 1][k][0][1] + dp[n - 1][k][0][2] + dp[n - 1][k][0][3] + dp[n - 1][k][0][4];

for (int z = 1; z < p; ++z)
ans += dp[n - 1][k][z][5];
ans %= mod;

return ans;
}

int32_t main()
{
boost;
// fileIO;

int tc;
cin >> tc;

while (tc--) {
int ans = solve();
cout << ans << endl;
}

return 0;
}