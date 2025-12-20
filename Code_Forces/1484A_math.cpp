#include<bits/stdc++.h>
using namespace std;
void solve(){


   long long a, b;
    cin >> a >> b;
        
    long long min_op = LLONG_MAX;
    int r;
    if(b==1){
        r=1;
    }
    else{
        r=0;
    }


    for (int i=r; i <=  50; i++) {
        long long ab = b + i;
        long long temp = a;
        long long div = 0;

        while (temp > 0) {
            temp =temp/ ab;
            div++;
        }

         min_op = min(min_op, div + i);
    }

    cout << min_op << endl;

    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}