#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin >> n >> k;
    vector<int> v(n);
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> v[i];  
        if(v[i]%2==0){
            cnt++;
        } 
    }



    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        
        if(v[i]%k == 0){
            cout<<0<<endl;
            return;
        }
        int ops = (k - (v[i] % k));
        ans = min(ans, ops);
    }

    if(k!=4){
        cout<<ans<<endl;
    }
    else{
        int even = 0;       
        bool present3 = false;

        for (int i=0; i<n; i++) {
            if (v[i] % 2 == 0) even++;
            if (v[i] % 4 == 3) present3 = true;
        }

        if ( even >= 2) {
            cout<<0<<endl;
        }
        else if (even == 1) {
            cout<<1<<endl;
        }
        else if(present3){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
       
    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
