#include<bits/stdc++.h>
using namespace std;
void solve(){


    int l,a,b;
    cin>>l>>a>>b;

    vector<int> v;
    int p = a;

    for (int i = 0; i < l; i++) {
        
        v.push_back(p);
        p = (p + b) % l;

        if(p== a){
            break;
        }
    }
		
    int mx = *max_element(v.begin(), v.end());

    cout<<mx<<endl;

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}