#include<bits/stdc++.h>
using namespace std;
void solve(){


    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++) {
        freq[v[i]]++;
    }

    int op =0;
    for (int i = 0; i < k; i++) {
        if (freq[i] == 0) {
            op++;
        }
    }
    int result = max(op,freq[k]);

   cout<<result<<endl;

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}