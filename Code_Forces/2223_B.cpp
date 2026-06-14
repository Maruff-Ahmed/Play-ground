#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
   
    vector<int> v(k, 0);
 
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            v[i % k]++;
        }
    }
 
   
    for (int i = 0; i < k; ++i) {
 
        if (v[i] % 2 != 0) {
 
            cout << "NO"<<endl;
            return;
        }
    }
 
    cout << "YES"<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}