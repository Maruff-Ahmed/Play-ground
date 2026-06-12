#include <bits/stdc++.h>
using namespace std;

vector<long long> divi(long long x, long long k) {
    vector<long long > v;
    while (true) {
        v.push_back(x);
        if (x == 0) break;
        if (x / k == x) break;
        x /= k;
    }
    return v;
}

void solve() {
    long long a, b, x;
        cin >> a >> b >> x;

        if (a == b) {
            cout << 0 << endl;
            return;
        }

        vector<long long> p = divi(a, x);
        vector<long long> q = divi(b, x);

        long long ans = LLONG_MAX;

        for (int i = 0; i < (int)p.size(); i++) {
            for (int j = 0; j < (int)q.size(); j++) {
                long long  x = p[i];
                long long y = q[j];

                long long op = i + j + abs(x - y);
                ans = min(ans, op);
            }
        }

        cout << ans << endl;
    

   
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}