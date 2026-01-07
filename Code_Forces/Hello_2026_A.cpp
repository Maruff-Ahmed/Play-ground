#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<bool> flag(n + 1, false);
        
        for (int i = 0; i < n; i++) {
            if (v[i] <= n) {
                flag[v[i]] = true;
            }
        }

       int m = 0;
    while (flag[m]) {
        m++;
    }

      if (m < k - 1){
        cout << m << endl;
      }
    else{
        cout << k - 1 << endl;

    }
       

}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
