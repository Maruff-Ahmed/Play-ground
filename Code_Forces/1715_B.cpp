#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long n,k,b,s;
    cin>> n >> k >> b>> s;
    
    if(s<(b*k) || s>((k * b) + (k - 1)*n)){
        cout<<-1<<endl;
    }
    else{

        long long r = s - b * k;

        vector<long long> result(n, 0);

        result[n - 1] = b * k;
    
        for (int i = 0; i < n - 1 ; i++) {
            long long x = min(k - 1, r);
            result[i] = x;
            r -= x;
        }

    
        if (r > 0) {
            result[n - 1] = result[n-1]+r;
        }

        for (int i = 0; i < n; i++)
            cout << result[i] << " ";
        cout << endl;

    }
    
    
}

int main() {
   int t;
    cin >> t;
    while(t--) solve();
}
