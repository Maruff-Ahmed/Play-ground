#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    long long n= stoi(s);
    int r= sqrt(n);

    if(r*r==n){
        cout<<0<< " "<<r<<endl;
    }else{
         cout<<-1<<endl;
    }
    
}

int main() {
   

    int t;
    cin >> t;
    while (t--) solve();
}
