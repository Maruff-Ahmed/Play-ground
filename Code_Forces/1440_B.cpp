#include<bits/stdc++.h>
using namespace std;
void solve(){


   int n,k;
   cin>> n >> k;

   vector<int>v(n*k);

   for(int i=0; i<n*k; i++){
    cin>>v[i];
   }

   long long sum = 0;
    int j = n*k - (n/2) - 1; 
    for(int i = 0; i < k; i++){
        sum =sum + v[j];
        j =j- (n/2 +1); 
    }
    cout << sum << endl;





    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}