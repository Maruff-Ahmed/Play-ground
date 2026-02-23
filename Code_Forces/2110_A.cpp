#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int op=0;
    sort(v.begin(),v.end());
    if( ((v[0]%2!=0) && (v[n-1]%2 !=0)) || ((v[0]%2==0) && (v[n-1]%2 ==0)) ){
        cout<<0<<endl;
        return;
    }
    vector<int>result;
    if(v[0]%2==0){
        for(int i=n-1; i>=0; i--){
            if(v[i]%2==0){
                result.push_back(n-i);

            }
        }
    }
    if(v[0]%2==1){
        for(int i=n-1; i>=0; i--){
            if(v[i]%2==1){
                result.push_back(n-i);

            }
        }

    }
    if(v[n-1]%2==0){
        for(int i=0; i<n; i++){
            if(v[i]%2==0){
               result.push_back(i+1);

            }
        }
    }
    if(v[n-1]%2==1){
         for(int i=0; i<n; i++){
            if(v[i]%2==1){
               result.push_back(i+1);

            }
        }

    }

    cout << *min_element(result.begin(), result.end()) -1 << endl;



}

int main() {
   
    int t;
    cin >> t;
    while (t--) solve();
}