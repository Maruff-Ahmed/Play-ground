#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n;
        cin >> n;

        vector<int>v(n);
        v[0]=(n/2)+1;

        for (int i = 1; i < n; i++) {
            if (i % 2 == 1)
                v[i] = v[i-1] - i; 
            else
                v[i] = v[i-1] + i;  
        }
        
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

        
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
