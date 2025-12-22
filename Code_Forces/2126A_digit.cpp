#include<bits/stdc++.h>
using namespace std;
void solve(){

    long long n;
    cin >> n;               

    string s = to_string(n); 

    char small = '9';    

    for (char c : s) {
        if (c < small) {
            small = c;
        }
    }
   
    cout << small-'0'  << endl; 
  
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}




