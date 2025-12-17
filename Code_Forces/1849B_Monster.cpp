#include<bits/stdc++.h>
using namespace std;
void solve(){


   int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) {
      cin >> x;
      
    }

    vector<pair<int,int>>l(n);

    for(int i=0; i<n; i++){

        int r= v[i]%k;

        if(r==0){
            l[i]={k,i+1};
        }
        else{
            l[i]={r,i+1};
        }
    }

    sort(l.begin(), l.end(), [](pair<int,int> a, pair<int,int> b) {
        if (a.first != b.first)
            return a.first > b.first;   
        return a.second < b.second;      
    });
    
    for (auto &x : l){
       cout << x.second << ' '; 
    } 
    cout << endl;
		
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}