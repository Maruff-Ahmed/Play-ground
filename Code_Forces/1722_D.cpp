#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
        cin >> n;
        string s;
        cin >> s;

        
        bool sort = true;
        for (int i = 1; i < n; i++) {
            if (s[i-1] > s[i]) {
                sort = false;
                break;
            }
        }

        if (sort) {
            cout << "Bob"<<endl;
            return;
        }

       
        cout << "Alice"<<endl;

        
        int p= -1;
        bool zero = false;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                zero = true;
            }
            if (s[i] == '1' && zero) {
                p = i;
                break;
            }
        }

        vector<int> result;

        
        for (int i = 0; i <=p ; i++) {
            if (s[i] == '1') {
                result.push_back(i + 1); 
            }
        }

    
        for (int i = p + 1; i < n; i++) {
            if (s[i] == '0') {
                result.push_back(i + 1); 
            }
        }

        cout << result.size() << endl;
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
