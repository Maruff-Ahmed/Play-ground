#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
   sort(v.begin() , v.end());
    bool f= true;
   for(int i=1; i<n-1; i=i+2){
   
    if(v[i]!=v[i+1]){
        f=false;
        break;
    }
   }

   if(f==false){

    cout<<"NO"<<endl;

   }
   else{
    cout<<"YES"<<endl;
   }
}

int main() {
   

    int t;
    cin >> t;
    while (t--) solve();
}
