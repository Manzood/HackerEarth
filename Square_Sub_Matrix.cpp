#include "bits/stdc++.h"
using namespace std;
#define debug(x) cout << #x << " = " << x << endl;
#define int long long

int32_t main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        scanf("%lld%lld", &n, &m);
        vector <vector <int>> a(n);
        vector <vector <vector <int>>> dp(n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            a[i].resize(m);
            dp[i].resize(m);
            for (int j = 0; j < m; j++) {
                dp[i][j].resize(3);
                scanf("%lld", &a[i][j]);
                if (a[i][j] == 1) {
                    dp[i][j][0] = 1;
                    dp[i][j][1] = 1;
                    dp[i][j][2] = 1;
                    if (i > 0) dp[i][j][1] = dp[i-1][j][1] + 1;
                    if (j > 0) dp[i][j][2] = dp[i][j-1][2] + 1;
                    if (i > 0 && j > 0) dp[i][j][0] += min(min(dp[i-1][j-1][0], dp[i-1][j][1]), dp[i][j-1][2]);
                } else {
                    dp[i][j][0] = 0;
                    dp[i][j][1] = 0;
                    dp[i][j][2] = 0;
                }
                ans = max(dp[i][j][0], ans);
            }
        }
        printf("%lld\n", ans * ans);
    }
}
