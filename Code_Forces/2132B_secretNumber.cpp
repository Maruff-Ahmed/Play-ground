#include<bits/stdc++.h>
using namespace std;
void solve(){


   long long n;
   cin>> n;
   vector<long long>result;

   int k=1;
   long long b=1+pow(10,k);

   while(n>=b){
    if(n%b==0){
        result.push_back(n/b);
    }
    b=1+pow(10,++k);
   }

   sort(result.begin(),result.end());
   cout<<result.size()<<endl;

   for(int i=0; i<result.size(); i++){
    cout<<result[i]<<" ";
   }
   cout<<endl;


   
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}