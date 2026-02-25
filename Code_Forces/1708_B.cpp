#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    long long n,l,r;
    
    cin>>n>>l>>r;

    vector<long long>v(n +1);
    bool f=true;
    for(int i=1; i<=n; i++){
        long long  c = (l+i -1 )/i;
        long long m=c*i;
        if(m<=r){

            v[i]=m;
        }
        else{
            f=false;
        }
        

    }
    if(f){
        cout<<"YES"<<endl;
        for(int i=1; i<=n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
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