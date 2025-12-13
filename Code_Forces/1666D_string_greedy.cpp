#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s,t;
    cin>>s>>t;
    unordered_map<char, int> freq;
    for (char c : t) freq[c]++;

    for(int i=s.size()-1; i>=0; i--){

       if (freq[s[i]] > 0) {
            freq[s[i]]--;  
        } else {
            s[i] = '@';  
        }
    }
    string r="";
    for(int i=0; i<s.size(); i++){ 
        if(s[i]!='@'){
            r+=s[i];
        }

    }

    if(r==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
 
int main() {
    
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    
}