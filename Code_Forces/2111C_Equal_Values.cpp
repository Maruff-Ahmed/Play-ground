#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
 
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
 
    long long result = LLONG_MAX;
    int i=1;
    while(i<=n){
       int j=i;
 
        while(j<=n && (arr[i]==arr[j])){
            j++;
        }
 
        long long cost= (1ll*(i-1)*arr[i])+(1ll*(n-j+1)*arr[i]);
 
        result=min(result,cost);
 
        i=j;
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