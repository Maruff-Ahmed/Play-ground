#include<bits/stdc++.h>
using namespace std;
void solve(){


   int n;
   cin>> n;
   string a;
   cin>> a;
   int m;
   cin>> m;
   string b,c;
   cin>> b>> c;
    string v={};
    string d={};
   for(int i=0; i<m; i++){
    if(c[i]=='V'){
        v=v+b[i];

    }
    else{
        d=d+b[i];
    }
   }
   reverse(v.begin(), v.end());
   cout<<v+a+d<<endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}