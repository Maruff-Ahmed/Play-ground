#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int free=0;
    int crime=0;

    for(int i=0;i<n;i++){

        if(v[i]>0){
            free=free+v[i];
        }
        else{
            if(free>0){
                free--;
            }
            else{
                crime++;
            }

        }

    }

    cout << crime<<endl;

}
 
int main() {
    
 
        solve();
   
 
    
}