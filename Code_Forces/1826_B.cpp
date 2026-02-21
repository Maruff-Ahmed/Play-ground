#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long b, a;
        cin >> b >> a;

        long long sum = -1;

        if ((a + b) % 2 == 0) 
            sum= a + b; // use k = 1

        if (a % 2 == 1 && b % 2 == 1) 
            sum = max(sum, a * b + 1);  // use k =b
            
        else if (a % 2 == 0 && (a % 4 == 0 || b % 2 == 0)) 
            sum = max(sum, 2 + (a * b) / 2);// use k=b/2

        cout << sum << endl;
}

int main() {
   
    int t;
    cin >> t;
    while (t--) solve();
}