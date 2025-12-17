#include<bits/stdc++.h>
using namespace std;
void solve(){


    long long n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];

    }
    bool flag= false;
    int a,b,c;
    for(int i=1; i<=n-2; i++){
        if(v[i-1]<v[i] && v[i]>v[i+1]){
            flag =true;
           a=i;
           b=i+1;
           c=i+2;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
       
    }else{
        cout<<"NO"<<endl;
    }


		
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}