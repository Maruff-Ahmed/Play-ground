#include<bits/stdc++.h>
using namespace std;
void solve(){


   long long x,y,k;
   cin>> x >> y >> k;
   
   long long  st=k*(y + 1) - 1;

   long long result= (st+(x-2))/(x-1); //(x-2)/(x-1) add for ceil form of result . (x-2 ) & (x-1) strick calculation er part na 


   
    cout<<result+k<<endl;

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}