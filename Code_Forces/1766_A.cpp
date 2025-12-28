#include <bits/stdc++.h>
using namespace std;

void solve() {
       long long n;
       cin>>n;
    int result =0;

    string t=to_string(n);
    int l=t.size();
    if(n<=10){
       cout<<n<<endl;
       return;
    }
    else{
        result=9*(l-1);       
    }
    
         
    int digit = t[0] - '0';
     result=result+digit;
   

    
    cout<<result<<endl;



    


}

int main() {
   

    int t;
    cin >> t;
    while (t--) solve();
}
