#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((v[j] % v[i]) % 2 == 0) {
                cout << v[i] << " " << v[j] <<endl;
                return;
            }
        }
    }

    cout << -1 << endl;


    
}

int main() {
   int t;
    cin >> t;
    while(t--) solve();
}
