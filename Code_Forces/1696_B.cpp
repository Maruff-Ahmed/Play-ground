#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<int> v(n);
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] == 0) 
        count++;
    }

    if(count == n){
        cout << 0 << endl;
        return;
    }

    int l = 0, r = n-1;
  
    for(int i=0; i<n; i++){
        if(v[i] != 0){
            l = i;
            break;
        }
    }

  
    for(int i=n-1; i>=0; i--){
        if(v[i] != 0){
            r = i;
            break;
        }
    }

    bool f = false;
    for(int i=l; i<=r; i++){
        if(v[i] == 0){
            f = true;
            break;
        }
    }

    if(f){
        cout << 2 << endl; 
    } else {
        cout << 1 << endl; 
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
