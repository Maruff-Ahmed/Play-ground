#include <bits/stdc++.h>
using namespace std;
void solve(){
        int n,k;
        cin >> n>>k;
 
        vector<int > a(n),b(n);
 
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        int maxb=b[0];
        int exp=0;
        int answer=0;
        if(k>n){
            for(int i=0; i<n; i++){ 
 
                exp=exp + a[i];
 
                maxb=max(maxb,b[i]);
 
                int unlock=k-(i+1);
                int total=exp+(unlock*maxb);
 
                answer=max(answer,total);
            }
        }
        else{
            for(int i=0; i<k; i++){
                exp=exp + a[i];
 
                maxb=max(maxb,b[i]);
 
                int unlock=k-(i+1);
                int total=exp+(unlock*maxb);
 
                answer=max(answer,total);
            }
        }
 
        cout<<answer<<endl;
}
 
int main() {
    
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}