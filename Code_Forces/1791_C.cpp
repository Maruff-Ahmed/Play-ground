#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
   vector<int>v1(n);
   vector<int>v2(n);

   for(int i=0; i<n; i++){
        cin>>v1[i];
   }

   for(int i=0; i<n; i++){
        cin>>v2[i];
   }
   int l=-1;
   int r=-1;
   for(int i=0; i<n; i++){
        if(v1[i]!=v2[i]){
            l=i;
            break;

        }
   }
   for(int i=n-1; i>=0; i--){
        if(v1[i]!=v2[i]){
            r=i;
            break;

        }
   }

    for(int i = l; i > 0; i--) {
        if(v2[i] >= v2[i - 1]) {
            l = i - 1;
        } else {
            break;
        }
    }
   for(int i = r; i < n - 1; i++) {
        if(v2[i] <= v2[i + 1]) {
            r = i + 1;
        } else {
            break;
        }
    }

   cout<<l+1<<" "<<r+1<<endl;


    
   


   

    

        
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
