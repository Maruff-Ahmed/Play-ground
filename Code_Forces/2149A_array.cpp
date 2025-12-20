#include<bits/stdc++.h>
using namespace std;
void solve(){


    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int cnt1 = count(v.begin(), v.end(), -1);
    int cnt0 =count(v.begin(), v.end(), 0);

    int result =0; 

    if(cnt1%2 !=0){
        result=result + 2;
        
    }

    cout<<result+cnt0<<endl;

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}