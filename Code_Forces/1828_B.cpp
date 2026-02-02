#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

  int k=0;
   for(int i=0; i<n; i++){

    k=__gcd(k,abs(v[i]-(i+1)));

   }

   cout<<k<<endl;

        
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
