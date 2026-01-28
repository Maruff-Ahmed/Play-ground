#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x,d;
    cin >> x>> d;

    
    long long result;
    for(int i=0; i<4; i++){
        
        if((d%4)==i){
            if(i==0){
            if(x%2==0){
                result=x;
                
            }
            else{
                result=x;
            }
        }
        else if(i==1){
            if(x%2==0){
                result=x-d;
                
            }
            else{
                result=x+d;
            }
        }
        else if(i==2){
            if(x%2==0){
                result=x+1;
                
            }
            else{
                result=x-1;
            }
        }
        else if(i==3){
            if(x%2==0){
                result=x+d+1;
                
            }
            else{
                result=x-(d+1);
            }
        }
        }
    }

    cout<<result<<endl;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
