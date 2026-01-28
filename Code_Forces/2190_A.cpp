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
    vector<int>move;
    cout<<"Alice"<<endl;

   
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {

            move.push_back(i);
            
        }
    }

    cout<<move.size()<<endl;

    for(int i=0; i<move.size();i++){
        cout<<move[i]+1<<" ";
    }
    
    cout <<endl;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
