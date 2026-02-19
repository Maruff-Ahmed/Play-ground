#include <bits/stdc++.h>
using namespace std;

void solve() {

    
    long long n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    long long x;
    cin>>x;

    long long nn = *min_element(v.begin(), v.end());
    long long mm = *max_element(v.begin(), v.end());


    if(x>=nn && x<=mm){
         cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    
}

int main() {
   int t;
    cin >> t;
    while(t--) solve();
}
