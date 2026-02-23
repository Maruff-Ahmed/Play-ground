#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y;
        cin >> x >> y;

        long long k= x-2*y;
        
        if (k % 3 != 0) {
            cout << "NO"<<endl;
        } else if (y >= 0 && x >= 2*y) {
            cout << "YES"<<endl;
        } else if (y < 0 && x >= -4*y) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
}

int main() {
   
    int t;
    cin >> t;
    while (t--) solve();
}