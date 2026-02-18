#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long n;
    cin>>n;

    vector<int>v(n);

    long long sum=0;

    for(int i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum<n){
        cout<<1<<endl;
    }
    else{
        cout<<sum-n<<endl;
    }
   
}

int main() {
   int t;
    cin >> t;
    while(t--) solve();
}
