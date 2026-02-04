#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int>v(n);

    for(int i=0; i<n; i++){

        cin>>v[i];

    }
    int op=0;
    int j=1;
    for(int i=0; i<n-1; i++){

        if(((v[i]%2==0) && (v[j] % 2 ==0) )|| ((v[i]%2!=0)&&(v[j]%2!=0))){
           op++;
        }
        j++;
       

    }
   


    cout<<op<<endl;

    

        
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
