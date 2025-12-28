#include <bits/stdc++.h>
using namespace std;

void solve() {
       long long n;
       cin>>n;
       vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    long long total=0;

    for(int i=0; i<n; i++){
            if(v[i]==2){
            total++;

        }
    }

    int k=-1;
    int l=0,r=0;

    for(int i=0; i<n; i++){
        if(v[i]==2){
            l++;
        }

        r=total-l;

        if(l==r){
            k=i+1;
            break;
        }

    }


       cout<<k<<endl;


}

int main() {
   

    int t;
    cin >> t;
    while (t--) solve();
}
