#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int n;
    cin >> n;
    
    int mn = 7; 
    int mx = 0; 
    
    for (int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        if (h < mn){
            mn= h;
        } 
        if (h > mx){
          mx= h;  
        } 
    }
    
    
    cout << mx - mn + 1 <<endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}