#include <bits/stdc++.h>
using namespace std;

void solve() {

    
        long long n;
        int d;
        cin >> n >> d;

        vector<int>v;
        v.push_back(1);
       
        if (n >= 3 || d%3==0){
            v.push_back(3);
        }
        

       
        if (d == 5) {
            v.push_back(5);
        }

        
        if (n>=3||d==7) {
            v.push_back(7);
        }
 
       
        if (d==9||(d%3==0&&n>=3)||n>=6){
            v.push_back(9);
         }
       

       for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
    
    
}

int main() {
   int t;
    cin >> t;
    while(t--) solve();
}
