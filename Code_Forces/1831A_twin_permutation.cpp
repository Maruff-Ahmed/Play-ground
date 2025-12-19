#include<bits/stdc++.h>
using namespace std;
void solve(){


   long long n;
   cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++){
        cin>>v[i];
   }

   for(int i=0; i<n;i++){
    cout<<(n+1)-v[i]<<" ";
   }
   cout<<endl;
		
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}