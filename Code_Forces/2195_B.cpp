#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ;i<n; i++){
        cin>>v[i];
    }  
    bool p=false;
    for(int i=0;i<=n;i++)
    {
        int x=i+1;
        while(x%2==0){
            x=x/2;
        }
        int y=v[i];

        while(y%2==0){
            y=y/2;
        }

        if(x!=y){
            p=true;
            break;

        }
       


        
    }
    if(p){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
      
     
    
   
}

int main() {
   int t;
    cin >> t;
    while(t--) solve();
}
