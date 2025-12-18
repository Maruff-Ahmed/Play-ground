#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int k;
    cin >> k;

    vector<string> month = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int curr ;

    for(int i = 0; i < 12; i++){
        if(month[i] == s){
            curr = i; 
            break;
        }
    }

    int result = (curr + k) % 12;
    cout << month[result] << endl;
}

int main(){
    solve();
}
