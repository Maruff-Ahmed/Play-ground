#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

   
    vector<long long> p(n+1);
    for (int i = 0; i < n; i++) {
        p[i + 1] = p[i] + v[i];
    }

    long long ans = 0;
  
    for (int i = 0; i <= k; i++) {
        if (2 * i <= n && k - i <= n) {
            ans = max(ans, p[n - (k - i)] - p[2 * i]);
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
