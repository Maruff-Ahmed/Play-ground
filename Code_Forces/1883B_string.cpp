#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    map<int,int>frequency;

    for(int i=0;i<n;i++){
        frequency[s[i] - 'a']++;
    }
    
    long long oddFreq=0;
    for(int i=0; i<26; i++){
        oddFreq=oddFreq+(frequency[i]%2);
    }

    if(oddFreq >(k+1)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }


		
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}