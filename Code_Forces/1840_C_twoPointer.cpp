#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    long long q;
    cin >> n >> k >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0;
    vector<long long> cnt;

    for (int i = 0; i < n; i++) {
        if (a[i] <= q) {  
            l++;
        } else {
            if (l >= k){
                cnt.push_back(l);
            } 
            l = 0;
        }
    }
    if (l >= k){
        cnt.push_back(l);
    } 

    long long result = 0;
    for (int i = 0; i < cnt.size(); i++) {
        result =result + (cnt[i] - k + 1) * (cnt[i] - k + 2) / 2;
    }

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
