#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;

    int mid = (n + 1) / 2;  
    cout << mid << " ";

    for(int i = 1; i <= n; i++) {
        if(mid + i <= n)
            cout << mid + i << " ";
        if(mid - i >= 1)
            cout << mid - i << " ";
    }

    cout<<endl;

}

int main() {
   
    int t;
    cin >> t;
    while (t--) solve();
}