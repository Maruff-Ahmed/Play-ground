#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(s.size() != 5) {  
        cout << "NO" << endl;
        return;
    }

    string t = "Timur";
    sort(t.begin(), t.end());
    sort(s.begin(), s.end());

    if(s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
