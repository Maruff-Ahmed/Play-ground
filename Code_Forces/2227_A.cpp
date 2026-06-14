#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int x, y;
    cin >> x>> y;

    if(x%2==0){
        cout<<"YES"<<endl;
    }
    else if(y%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}