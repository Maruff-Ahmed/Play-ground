#include <bits/stdc++.h>
using namespace std;

void solve() {
        long long n, k;
        cin >> n >> k;

        
        long long cur = n;
        int time = 0;

        while (cur > k) {
            long long l= cur / 2;
            long long r = cur - l; 
            if (k <= l)
                cur = l;
            else
                cur = r;

            time++;
        }

        if (cur == k)
            cout << time << endl;
        else
            cout << -1 << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
