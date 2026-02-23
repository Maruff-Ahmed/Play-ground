#include <bits/stdc++.h>
using namespace std;

void solve() {
    
       long long n, k;
        cin >> n >> k;

        long long ans = 0;

        if (n % 2 == 1) {
            n -= k;
            ans = 1;
        }

        k -= 1;
        if(n%k==0){
            ans+=n/k;
        }
        else{
            ans+=n/k +1;
        }
        cout << ans << endl;

}

int main() {
   
    int t;
    cin >> t;
    cin.ignore();
    while (t--) solve();
}