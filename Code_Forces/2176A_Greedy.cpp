#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
int result=0;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int big=arr[0];
 
    for(int i=1; i<n; i++){
        if(arr[i]<big){
            result++;
        }
 
        big=max(big,arr[i]);
    }
    
    cout<<result<<endl;
}
 
int main() {
    
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
   
}