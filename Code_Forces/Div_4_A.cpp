#include <bits/stdc++.h>
using namespace std;

void solve() {
       int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++){
            cin >> v[i];
        } 

        vector<int> s(n + 2, 0);
        vector<int> p(n + 2, n);
        
        for (int i = n; i >= 1; i--) {
            if (v[i] > s[i + 1]) {
                s[i] = v[i];
                p[i] = i;
            } else if (v[i] == s[i + 1]) {
                s[i] = v[i];
                p[i] = i; 
            } else {
                s[i] = s[i + 1];
                s[i] = p[i + 1];
            }
        }

        int l = -1, r = -1;
        for (int i = 1; i <= n; i++) {
            if (s[i] > v[i]) {
                l = i;
                r = p[i];
                break;
            }
        }

        if (l != -1) {
            reverse(v.begin() + l, v.begin() + r + 1);
        }

        for (int i = 1; i <= n; i++) {
            cout << v[i] <<" ";
        }
        cout<<endl;
           

}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
