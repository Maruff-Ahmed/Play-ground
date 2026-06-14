#include <bits/stdc++.h>
using namespace std;
 
void solve() {
   int n;
   cin>>n;
   string s;
   cin>>s;
   int p=0;
   int q=0;
   for(int i=0; i<n; i++){
    if(s[i]=='('){
        p++;

    }
    if(s[i]==')'){
        q++;

    }

   }
   if(p==q){
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