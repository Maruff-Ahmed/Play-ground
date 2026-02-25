#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    long long n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];

    }
    bool f=true;
    for(int i=0; i<n; i++){
        if(v[i]>v[i]){
            f=false;
        }
    }
    
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
   
    int t;
    cin >> t;
  
    while (t--) solve();
}