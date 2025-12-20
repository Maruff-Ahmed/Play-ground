#include<bits/stdc++.h>
using namespace std;
void solve(){


    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int ans=0;

    for(int i=0; i<n-1; i=i+2){
        int mx= v[i+1]-v[i];
        ans=max(ans,mx);
    }

    cout<<ans<<endl;

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}