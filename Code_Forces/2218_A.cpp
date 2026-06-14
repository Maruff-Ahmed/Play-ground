#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> v;
    long long sum = 0;

    for(int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }

    long long m = *max_element(v.begin(), v.end());

    cout << (2 * m) - sum <<endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}