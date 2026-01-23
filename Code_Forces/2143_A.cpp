#include <bits/stdc++.h>
using namespace std;

void solve() {
        long long n;
        cin>>n;
        vector<int>v(n);

        long long sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        for(int i=0; i<n; i++){
            sum=sum+v[i];
        }

        long long x = sqrt(sum);

        if(x*x == sum){
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
