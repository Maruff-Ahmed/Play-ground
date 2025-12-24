#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

   
    long long total = 0;
    for (int i = 0; i + 1 < n; i++) {
        total += abs(v[i] - v[i + 1]);
    }

   
    long long time = 0;
    time = max(time, (long long)abs(v[0] - v[1]));

    
    time = max(time, (long long)abs(v[n - 2] - v[n - 1]));

    for (int i = 1; i + 1 < n; i++) { 
        long long x = abs(v[i - 1] - v[i]) + abs(v[i] - v[i + 1]);

        long long y = abs(v[i - 1] - v[i + 1]);

        time = max(time, x - y);
    }

    cout << total - time << endl;
}

int main() {
   

    int t;
    cin >> t;
    while (t--) solve();
}
