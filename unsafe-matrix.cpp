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
        int u = 0, v = 1e9+7;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int temp;
                scanf("%lld", &temp);
                a[i].push_back(temp);
                u = max(a[i][j], u);
                v = min(a[i][j], v);
            }
        }
        vector <bool> rows(n, true);
        vector <bool> cols(m, true);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == u || a[i][j] == v) {
                    rows[i] = false;
                    cols[j] = false;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (rows[i] && cols[j]) ans++;
            }
        }
        printf("%lld\n", ans);
    }
}

