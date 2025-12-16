#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    map<int ,int>freq;

    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }
    int maxfreq=0;
   for (auto i : freq) {
        maxfreq = max(maxfreq, i.second);
   }
   int result =0;
   while(maxfreq<n){
        result ++;

        if((maxfreq*2) <= n){
            result= result + maxfreq;
            maxfreq=maxfreq*2;
        }
        else{
            result=result +(n-maxfreq);
            maxfreq=maxfreq+(n-maxfreq);
            
        }

   }

   cout<<result<<endl;


		
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}