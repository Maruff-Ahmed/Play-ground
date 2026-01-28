#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string t=s;
    sort(t.begin(),t.end());

    if (s == t) {
        cout << "Bob"<<endl;
        return;
    }

    cout<<"Alice"<<endl;

    int p=-1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            p = i;
            break;
        }
    }

        
    int q = -1;
    for (int i = n - 1; i >=0; i--) {
        if (s[i] == '0') {
            q= i;
            break;
        }
    }

       
    int m = q - p + 1;
    cout << m << endl;


    for (int i = p; i <= q; i++) {
        cout << i + 1 << " ";
    }
    cout <<endl;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
