#include <bits/stdc++.h>
using namespace std;

void solve() {
       int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int f = -1;
        for (int i = 0; i < n; i++) {
            if (v[i] == n) {

                f= i;
                break;
            }
        }

        if (f != 0) {
           
            reverse(v.begin(), v.begin() + f + 1);
        } 
        
        
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
           

}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
