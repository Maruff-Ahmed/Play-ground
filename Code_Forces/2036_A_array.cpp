#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    vector<int > v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    bool f=true;
    for(int i=0; i<n-1; i++){
        int diff= abs( v[i]-v[i+1]);

        if(diff==5 || diff==7){
            f=true;

        }
        else{
            f=false;
            break;
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
