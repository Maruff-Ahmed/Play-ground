#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<int>v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];

    }
    long long x=*max_element(v.begin(),v.end());
    int result=0;
    for(int i =0; i<n; i++){
        if(v[i]==x){
            result++;
        }

    }
    cout<<result<<endl;

    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}