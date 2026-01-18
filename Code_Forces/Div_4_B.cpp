#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, h; 
    cin >> n >> m >> h;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<long long> add(n, 0);
    vector<int> p;

    for (int i = 0; i < m; i++) {
        long long x, y;
        cin >> x >> y;
        x--;

        if (y == 0){
          continue;  
        } 

        if (add[x] == 0) {
            p.push_back(x);
        }

        add[x] += y;

        if (v[x] + add[x] > h) {
            for (int idx : p) {
                add[idx] = 0;
            }
            p.clear();
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] + add[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
