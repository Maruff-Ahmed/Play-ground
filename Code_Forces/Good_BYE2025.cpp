#include <bits/stdc++.h>
using namespace std;

void solve() {
        string s;
        cin >> s;
         int n = s.size();
        int ops = 0;
     if (s[0] == 'u') {
        s[0] = 's';
        ops++;
    }
    if (s[n-1] == 'u') {
        s[n-1] = 's';
        ops++;
    }
    for (int i = 0; i < n; i++ ) {
        if (s[i] == 'u') {
            int j = i;
            while (j < n && s[j] == 'u'){
                 j++;
            }
            int len = j - i;
            ops =ops+( len / 2);
            i = j;
        } 
    }

    int y = 0;
    for (char c : s) if (c == 's'){
        y++;
    } 

    if (y < 2){
         ops=ops+(2-y);
    }
       
    cout<<ops<<endl;
}

int main() {
   

    int t;
    cin >> t;
    while (t--) solve();
}
