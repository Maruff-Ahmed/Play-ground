#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    string s;
    cin>>n;
    cin>>s;
    int z=0;
    int one=0;

    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            z++;
        }
        else{
            one++;
        }
    }
    if(one==0){
        cout<<0<<endl;
        return;
    }

     if(z%2 == 0 && one % 2 == 1) {
        cout << -1 <<endl;
        return;
    }
    if(z % 2 == 1) {
         cout << z << endl;
 
         for (int i = 0 ; i < n ; i++) {
             if(s[i] == '0') {
                 cout << i + 1 << " ";    
             }
         }
         cout <<endl;
        return; 
 
    }
 
    if(one%2==0) {
         cout << one << endl;
 
         for (int i = 0 ; i < n ; i++) {
             if(s[i] == '1') {
                 cout << i + 1 << " ";    
             }
         }
         cout << endl;
        return; 
    }
    else{
        cout << -1 << endl;
    }
    
}

int main() {
   
    int t;
    cin >> t;
    while (t--) solve();
}